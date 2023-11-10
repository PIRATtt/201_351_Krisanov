#ifndef CRYPTO_H
#define CRYPTO_H

#include <QObject>
#include <QBuffer>      // Буффер, из него берем по порядку 256 байт
#include <QDebug>       // Для выводя в консоль
#include <QFile>        // Для работы с файлами
#include <openssl\evp.h>// OpenSSL для шифрования
#include <openssl\err.h>// OpenSSL для шифрования
#include <QJsonArray>   //
#include <QJsonObject>  // Для работы с Json форматом
#include <QJsonDocument>//


class crypto
{
public:
    crypto();
    // Шифрование числа
    static QString encrypt(QString num, const QByteArray &key);
    // Дешифрование числа
    static QString decrypt(QString record, const QByteArray &key);

    constexpr static unsigned char m_iv[17] = "65e84be33532fb78";
};

#endif // CRYPTO_H
