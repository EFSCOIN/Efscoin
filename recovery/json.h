#ifndef JSON_H
#define JSON_H

/* Json helper class
 *
 * Outsources the hard work to QJson
 *
 * Author: Jean Wallet
 * Maintained by EFSCOIN Efs
 *
 * See LICENSE.txt for license details
 *
 */

#include <QVariant>

class Json
{
public:
    static QVariant parse(const QByteArray &json);
    static QByteArray serialize(const QVariant &json);
    static QVariant loadFromFile(const QString &filename);
    static void saveToFile(const QString &filename, const QVariant &json);
};

#endif // JSON_H
