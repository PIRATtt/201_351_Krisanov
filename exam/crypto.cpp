#include "crypto.h"
#include "QCryptographicHash"

crypto::crypto()
{

}

//QString Crypto::encrypt(QString num, const QByteArray &key) {
//    QString result;

//    // Создание контекста шифрования (объявление)
//    EVP_CIPHER_CTX *ctx;
//    if (!(ctx = EVP_CIPHER_CTX_new())) {
//        return 0;
//    }

//    // Инициализация контекста
//    if (1 != EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, (unsigned char*)key.data(), m_iv)) {
//        return 0;
//    }

//    QByteArray plaintext = QByteArray(num.toUtf8());
//    QBuffer buffer(&plaintext); // Из буффера берутся блоки по 256 байт
//    buffer.open(QBuffer::ReadOnly);

//    unsigned char encrypted_buf[256] = {0};
//    char decrypted_buf[256] = {0};
//    int encrypted_len = 0;
//    int read_len = buffer.read(decrypted_buf, 256);

//    // Шифрование
//    if (1 != EVP_EncryptUpdate(ctx,
//                               encrypted_buf,                   // выходной параметр, буфер, куда записывается результат
//                               &encrypted_len,                  // выходной параметр, указатель, длина зашифрованного текста
//                               (unsigned char *) decrypted_buf, // входной параметр, буфер, открытый текст
//                               read_len)) {                     // входной параметр, кол-во байт, которые нужно зашифровать
//        return 0;
//    }

//    int tmplen;
//    // Заполняет блок шифра и завершает шифрование
//    if (!EVP_EncryptFinal_ex(ctx, encrypted_buf + encrypted_len, &tmplen)) {
//        qDebug() << "Ошибка!";
//        EVP_CIPHER_CTX_free(ctx);
//        return 0;
//    }
//    encrypted_len += tmplen;
//    buffer.close();

//    result = QString::fromUtf8(QByteArray((char *)encrypted_buf, encrypted_len).toBase64());

//    // Очистка контекста
//    EVP_CIPHER_CTX_free(ctx);

//    return result;
//}


//QString Crypto::decrypt(QString record, const QByteArray &key) {
//    QString result;

//    // Создание контекста шифрования (объявление)
//    EVP_CIPHER_CTX *ctx;
//    if (!(ctx = EVP_CIPHER_CTX_new())) {
//        return 0;
//    }

//    // Инициализация контекста
//    if (1 != EVP_DecryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, (unsigned char*)key.data(), m_iv)) {
//        return 0;
//    }

//    QByteArray ciphertext = QByteArray::fromBase64(record.toUtf8());
//    QBuffer buffer(&ciphertext);    // Из буффера берутся блоки по 256 байт
//    buffer.open(QBuffer::ReadOnly);

//    unsigned char decrypted_buf[256] = {0};
//    char encrypted_buf[256] = {0};
//    int decrypted_len = 0;
//    int read_len = buffer.read(encrypted_buf, 256);

//    // Расшифровка
//    if (1 != EVP_DecryptUpdate(ctx,
//                               decrypted_buf,                   // выходной параметр, буфер куда записывается расшифрованный текст
//                               &decrypted_len,                  // выходной параметр, длина расшифрованного текста
//                               (unsigned char *) encrypted_buf, // входной параметр, буфер, который расшифровывают
//                               read_len)) {                     // входной параметр, кол-во исходных байт
//        return 0;
//    }


//    int tmplen;
//    // Заполняет блок шифра и завершает расшифровку
//    if (!EVP_DecryptFinal_ex(ctx, decrypted_buf + decrypted_len, &tmplen)) {
//        qDebug("Ошибка!");
//        EVP_CIPHER_CTX_free(ctx);
//        return 0;
//    }

//    decrypted_len += tmplen;
//    buffer.close();

//    result = QByteArray((char *)decrypted_buf, decrypted_len);

//    // Очистка контекста
//    EVP_CIPHER_CTX_free(ctx);

//    return result;
//}
