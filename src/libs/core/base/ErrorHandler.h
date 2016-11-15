#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <QObject>
#include <QString>
#include <QVariant>

class ErrorHandler : public QObject
{
    Q_OBJECT
public:
    explicit ErrorHandler(QObject * parent=0);
    ErrorHandler(const QString className,
                 QObject * parent=0);
    ~ErrorHandler();

protected slots:
    void handle(const int error,
                const quint64 code,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    void handle(const quint64 code,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    void handle(const int error,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    void handle(void);

    void setError(const int error);
    void setCode(const quint64 code);
    void setString(const QString & string);
    void setData(const QVariant & data);

    void registerError(const int error,
                       const quint64 code,
                       const QString & string);
    void registerError(const quint64 code,
                       const QString & string);
    void registerError(const int error,
                       const QString & string);

signals:
    void error(int error, quint64 code, QString, QVariant data);

public slots:

private:
    int         mError          = 0;
    quint64     mErrorCode      = 0; //  EightCC
    QString     mErrorString;
    QVariant    mErrorData;

private: // static
    QMap<int, QString>      mErrorStringMap;
    QMap<quint64, QString>  mErrorCodeMap; // EightCC
};

#endif // ERRORHANDLER_H
