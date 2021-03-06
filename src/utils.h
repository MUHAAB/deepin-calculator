#ifndef UTILS_H
#define UTILS_H

#include <QObject>

class Utils : public QObject
{
    Q_OBJECT

public:
    Utils();
    ~Utils();

    static QString getQssContent(const QString &filePath);
    static QString formatThousandsSeparators(const QString &str);
    static bool stringIsDigit(const QString &str);
    static QString reformatSeparators(const QString &exp);
};

#endif
