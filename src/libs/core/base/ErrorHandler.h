#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H
#include "BaseLib.h"

#include <QObject>
#include <QString>
#include <QVariant>

typedef quint64 EightCC;

class BASESHARED_EXPORT ErrorHandler : public QObject
{
    Q_OBJECT
public:
    explicit ErrorHandler(QObject * parent=0);
    ErrorHandler(const QString className,
                 QObject * parent=0);
    bool isError(void) const;
    void clearError(void);
    ~ErrorHandler();

protected slots:
    bool handle(void);

protected:
    void setError(const int error);
    void setCode(const EightCC code);
    void setString(const QString & string);
    void setData(const QVariant & data);
    bool handle(const int error,
                const EightCC code,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    bool handle(const EightCC code,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    bool handle(const int error,
                const QString & string=QString(),
                const QVariant & data=QVariant());
    bool handle(const QString & string);

protected: // static
    static void registerError(const int error,
                              const EightCC code,
                              const QString & string);
    static void registerError(const EightCC code,
                              const QString & string);
    static void registerError(const int error,
                              const QString & string);

signals:
    void error(int error, EightCC code, QString, QVariant data);

public slots:

private:
    int         mError          = 0;
    EightCC     mErrorCode      = 0;
    QString     mErrorString;
    QVariant    mErrorData;

private: // static
    static QMap<int, QString>      mErrorStringMap;
    static QMap<EightCC, QString>  mCodeStringMap;
};

#endif // ERRORHANDLER_H
