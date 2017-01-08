#ifndef BASICERROROBJECT_H
#define BASICERROROBJECT_H

#include <QObject>
#include "BasicErrorInfo.h"

class BasicErrorObject : public QObject, BasicErrorInfo
{
    Q_OBJECT
public:
    explicit BasicErrorObject(QObject * parent=0);

protected:
    void emitError(void);

signals:
    void error(ErrorCode, ErrorString, ErrorData);

public slots:
    void handleError(const enumSeverity sev,
                     const ErrorCode code,
                  const ErrorString & string=ErrorString(),
                  const ErrorData & data=ErrorData());
    void handleError(const enumSeverity sev,
                     const ErrorString & string,
                  const ErrorData & data=ErrorData());
    void handleError(const enumSeverity sev,
                     const ErrorData & data);

};

#endif // BASICERROROBJECT_H
