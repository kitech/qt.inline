
#include <QtCore>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:837
// [1] bool qIsNull(float)
extern "C"
bool C_ZL7qIsNullf(float f) {
  return (bool)qIsNull(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:821
// [1] bool qIsNull(double)
extern "C"
bool C_ZL7qIsNulld_1(double d) {
  return (bool)qIsNull(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:801
// [1] bool qFuzzyCompare(float, float)
extern "C"
bool C_ZL13qFuzzyCompareff(float p1, float p2) {
  return (bool)qFuzzyCompare(p1, p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:796
// [1] bool qFuzzyCompare(double, double)
extern "C"
bool C_ZL13qFuzzyComparedd_1(double p1, double p2) {
  return (bool)qFuzzyCompare(p1, p2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:811
// [1] bool qFuzzyIsNull(float)
extern "C"
bool C_ZL12qFuzzyIsNullf(float f) {
  return (bool)qFuzzyIsNull(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:806
// [1] bool qFuzzyIsNull(double)
extern "C"
bool C_ZL12qFuzzyIsNulld_1(double d) {
  return (bool)qFuzzyIsNull(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:53
// [1] bool qIsFinite(float)
extern "C"
bool C_Z9qIsFinitef(float f) {
  return (bool)qIsFinite(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:50
// [1] bool qIsFinite(double)
extern "C"
bool C_Z9qIsFinited_1(double d) {
  return (bool)qIsFinite(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:70
// [4] uint qHashBits(const void *, size_t, uint)
extern "C"
uint C_Z9qHashBitsPKvmj(const void * p, size_t size, uint seed) {
  return (uint)qHashBits(p, size, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:685
// [8] QByteArray qCompress(const class QByteArray &, int)
extern "C"
void* C_Z9qCompressRK10QByteArrayi(QByteArray* data, int compressionLevel) {
  auto rv = qCompress(*data, compressionLevel);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:683
// [8] QByteArray qCompress(const uchar *, int, int)
extern "C"
void* C_Z9qCompressPKhii_1(const uchar * data, int nbytes, int compressionLevel) {
  auto rv = qCompress(data, nbytes, compressionLevel);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:109
// [2] quint16 qChecksum(const char *, uint, Qt::ChecksumType)
extern "C"
quint16 C_Z9qChecksumPKcjN2Qt12ChecksumTypeE(const char * s, uint len, Qt::ChecksumType standard) {
  return (quint16)qChecksum(s, len, standard);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:108
// [2] quint16 qChecksum(const char *, uint)
extern "C"
quint16 C_Z9qChecksumPKcj_1(const char * s, uint len) {
  return (quint16)qChecksum(s, len);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:775
// [-2] void qBadAlloc()
extern "C"
void C_Z9qBadAllocv() {
  qBadAlloc();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:538
// [8] qint64 qRound64(float)
extern "C"
qint64 C_Z8qRound64f(float d) {
  return (qint64)qRound64(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:536
// [8] qint64 qRound64(double)
extern "C"
qint64 C_Z8qRound64d_1(double d) {
  return (qint64)qRound64(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1144
// [4] int qIntCast(float)
extern "C"
int C_Z8qIntCastf(float f) {
  return (int)qIntCast(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1143
// [4] int qIntCast(double)
extern "C"
int C_Z8qIntCastd_1(double f) {
  return (int)qIntCast(f);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:206
// [8] qreal qFastSin(qreal)
extern "C"
qreal C_Z8qFastSind(qreal x) {
  return (qreal)qFastSin(x);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:216
// [8] qreal qFastCos(qreal)
extern "C"
qreal C_Z8qFastCosd(qreal x) {
  return (qreal)qFastCos(x);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:261
// [8] QString qAppName()
extern "C"
void* C_Z8qAppNamev() {
  auto rv = qAppName();
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:533
// [4] int qRound(float)
extern "C"
int C_Z6qRoundf(float d) {
  return (int)qRound(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:531
// [4] int qRound(double)
extern "C"
int C_Z6qRoundd_1(double d) {
  return (int)qRound(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:52
// [1] bool qIsNaN(float)
extern "C"
bool C_Z6qIsNaNf(float f) {
  return (bool)qIsNaN(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:49
// [1] bool qIsNaN(double)
extern "C"
bool C_Z6qIsNaNd_1(double d) {
  return (bool)qIsNaN(d);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:51
// [1] bool qIsInf(float)
extern "C"
bool C_Z6qIsInff(float f) {
  return (bool)qIsInf(f);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:48
// [1] bool qIsInf(double)
extern "C"
bool C_Z6qIsInfd_1(double d) {
  return (bool)qIsInf(d);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:74
// [4] int qFloor(qreal)
extern "C"
int C_Z6qFloord(qreal v) {
  return (int)qFloor(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:122
// [8] qreal qAtan2(qreal, qreal)
extern "C"
qreal C_Z6qAtan2dd(qreal y, qreal x) {
  return (qreal)qAtan2(y, x);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:128
// [8] qreal qSqrt(qreal)
extern "C"
qreal C_Z5qSqrtd(qreal v) {
  return (qreal)qSqrt(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:54
// [8] double qSNaN()
extern "C"
double C_Z5qSNaNv() {
  return (double)qSNaN();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:55
// [8] double qQNaN()
extern "C"
double C_Z5qQNaNv() {
  return (double)qQNaN();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:86
// [4] uint qHash(quint64, uint)
extern "C"
uint C_Z5qHashyj(quint64 key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:90
// [4] uint qHash(qint64, uint)
extern "C"
uint C_Z5qHashxj_1(qint64 key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:75
// [4] uint qHash(ushort, uint)
extern "C"
uint C_Z5qHashtj_2(ushort key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:76
// [4] uint qHash(short, uint)
extern "C"
uint C_Z5qHashsj_3(short key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:79
// [4] uint qHash(ulong, uint)
extern "C"
uint C_Z5qHashmj_4(ulong key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:85
// [4] uint qHash(long, uint)
extern "C"
uint C_Z5qHashlj_5(long key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:77
// [4] uint qHash(uint, uint)
extern "C"
uint C_Z5qHashjj_6(uint key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:78
// [4] uint qHash(int, uint)
extern "C"
uint C_Z5qHashij_7(int key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:73
// [4] uint qHash(uchar, uint)
extern "C"
uint C_Z5qHashhj_8(uchar key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:91
// [4] uint qHash(float, uint)
extern "C"
uint C_Z5qHashfj_9(float key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:94
// [4] uint qHash(long double, uint)
extern "C"
uint C_Z5qHashej_10(long double key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:92
// [4] uint qHash(double, uint)
extern "C"
uint C_Z5qHashdj_11(double key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:72
// [4] uint qHash(char, uint)
extern "C"
uint C_Z5qHashcj_12(char key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:74
// [4] uint qHash(signed char, uint)
extern "C"
uint C_Z5qHashaj_13(signed char key, uint seed) {
  return (uint)qHash(key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurlquery.h:53
// [4] uint qHash(const class QUrlQuery &, uint)
extern "C"
uint C_Z5qHashRK9QUrlQueryj_14(QUrlQuery* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimetype.h:58
// [4] uint qHash(const class QMimeType &, uint)
extern "C"
uint C_Z5qHashRK9QMimeTypej_15(QMimeType* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:412
// [4] uint qHash(const class QDateTime &, uint)
extern "C"
uint C_Z5qHashRK9QDateTimej_16(QDateTime* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:103
// [4] uint qHash(const class QBitArray &, uint)
extern "C"
uint C_Z5qHashRK9QBitArrayj_17(QBitArray* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:99
// [4] uint qHash(const class QString &, uint)
extern "C"
uint C_Z5qHashRK7QStringj_18(QString* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:56
// [4] uint qHash(const class QRegExp &, uint)
extern "C"
uint C_Z5qHashRK7QRegExpj_19(QRegExp* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlocale.h:62
// [4] uint qHash(const class QLocale &, uint)
extern "C"
uint C_Z5qHashRK7QLocalej_20(QLocale* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/quuid.h:235
// [4] uint qHash(const class QUuid &, uint)
extern "C"
uint C_Z5qHashRK5QUuidj_21(QUuid* uuid, uint seed) {
  return (uint)qHash(*uuid, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:414
// [4] uint qHash(const class QTime &, uint)
extern "C"
uint C_Z5qHashRK5QTimej_22(QTime* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qdatetime.h:413
// [4] uint qHash(const class QDate &, uint)
extern "C"
uint C_Z5qHashRK5QDatej_23(QDate* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qurl.h:122
// [4] uint qHash(const class QUrl &, uint)
extern "C"
uint C_Z5qHashRK4QUrlj_24(QUrl* url, uint seed) {
  return (uint)qHash(*url, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:102
// [4] uint qHash(const class QPersistentModelIndex &, uint)
extern "C"
uint C_Z5qHashRK21QPersistentModelIndexj_25(QPersistentModelIndex* index, uint seed) {
  return (uint)qHash(*index, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:149
// [4] uint qHash(const class QPersistentModelIndex &, uint)
extern "C"
uint C_Z5qHashRK21QPersistentModelIndexj_26(QPersistentModelIndex* index, uint seed) {
  return (uint)qHash(*index, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:227
// [4] uint qHash(const class QItemSelectionRange &)
extern "C"
uint C_Z5qHashRK19QItemSelectionRange_27(QItemSelectionRange* arg0) {
  return (uint)qHash(*arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:62
// [4] uint qHash(const class QRegularExpression &, uint)
extern "C"
uint C_Z5qHashRK18QRegularExpressionj_28(QRegularExpression* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qversionnumber.h:54
// [4] uint qHash(const class QVersionNumber &, uint)
extern "C"
uint C_Z5qHashRK14QVersionNumberj_29(QVersionNumber* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:437
// [4] uint qHash(const class QModelIndex &)
extern "C"
uint C_Z5qHashRK11QModelIndex_30(QModelIndex* index) {
  return (uint)qHash(*index);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:100
// [4] uint qHash(const class QStringRef &, uint)
extern "C"
uint C_Z5qHashRK10QStringRefj_31(QStringRef* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:97
// [4] uint qHash(const class QByteArray &, uint)
extern "C"
uint C_Z5qHashRK10QByteArrayj_32(QByteArray* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:96
// [4] uint qHash(const class QChar, uint)
extern "C"
uint C_Z5qHash5QCharj_33(const QChar* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:104
// [4] uint qHash(class QLatin1String, uint)
extern "C"
uint C_Z5qHash13QLatin1Stringj_34(QLatin1String* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:102
// [4] uint qHash(class QStringView, uint)
extern "C"
uint C_Z5qHash11QStringViewj_35(QStringView* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:80
// [8] qreal qFabs(qreal)
extern "C"
qreal C_Z5qFabsd(qreal v) {
  return (qreal)qFabs(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:68
// [4] int qCeil(qreal)
extern "C"
int C_Z5qCeild(qreal v) {
  return (int)qCeil(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:116
// [8] qreal qAtan(qreal)
extern "C"
qreal C_Z5qAtand(qreal v) {
  return (qreal)qAtan(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:110
// [8] qreal qAsin(qreal)
extern "C"
qreal C_Z5qAsind(qreal v) {
  return (qreal)qAsin(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:104
// [8] qreal qAcos(qreal)
extern "C"
qreal C_Z5qAcosd(qreal v) {
  return (qreal)qAcos(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:98
// [8] qreal qTan(qreal)
extern "C"
qreal C_Z4qTand(qreal v) {
  return (qreal)qTan(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:86
// [8] qreal qSin(qreal)
extern "C"
qreal C_Z4qSind(qreal v) {
  return (qreal)qSin(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:146
// [8] qreal qPow(qreal, qreal)
extern "C"
qreal C_Z4qPowdd(qreal x, qreal y) {
  return (qreal)qPow(x, y);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:56
// [8] double qInf()
extern "C"
double C_Z4qInfv() {
  return (double)qInf();
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:140
// [8] qreal qExp(qreal)
extern "C"
qreal C_Z4qExpd(qreal v) {
  return (qreal)qExp(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:92
// [8] qreal qCos(qreal)
extern "C"
qreal C_Z4qCosd(qreal v) {
  return (qreal)qCos(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:134
// [8] qreal qLn(qreal)
extern "C"
qreal C_Z3qLnd(qreal v) {
  return (qreal)qLn(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:78
// [-2] void qRegisterStaticPluginFunction(struct QStaticPlugin)
extern "C"
void C_Z29qRegisterStaticPluginFunction13QStaticPlugin(QStaticPlugin* staticPlugin) {
  qRegisterStaticPluginFunction(*staticPlugin);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1141
// [4] int qEnvironmentVariableIntValue(const char *, _Bool *)
extern "C"
int C_Z28qEnvironmentVariableIntValuePKcPb(const char * varName, bool * ok) {
  return (int)qEnvironmentVariableIntValue(varName, ok);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1139
// [1] bool qEnvironmentVariableIsEmpty(const char *)
extern "C"
bool C_Z27qEnvironmentVariableIsEmptyPKc(const char * varName) {
  return (bool)qEnvironmentVariableIsEmpty(varName);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1140
// [1] bool qEnvironmentVariableIsSet(const char *)
extern "C"
bool C_Z25qEnvironmentVariableIsSetPKc(const char * varName) {
  return (bool)qEnvironmentVariableIsSet(varName);
}

// Invalid Visibility=Default Availability=Available
// /home/gzleo/oss/qt.gen/headers/QtCore/extra_export.h:7
// [1] bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *)
extern "C"
bool C_Z23qUnregisterResourceDataiPKhS0_S0_(int arg0, const unsigned char * arg1, const unsigned char * arg2, const unsigned char * arg3) {
  return (bool)qUnregisterResourceData(arg0, arg1, arg2, arg3);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:279
// [40] QTextStreamManipulator qSetRealNumberPrecision(int)
extern "C"
void C_Z23qSetRealNumberPrecisioni(int precision) {
  auto rv = qSetRealNumberPrecision(precision);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:191
// [8] QtMessageHandler qInstallMessageHandler(QtMessageHandler)
extern "C"
void C_Z22qInstallMessageHandlerPFv9QtMsgTypeRK18QMessageLogContextRK7QStringE(QtMessageHandler arg0) {
  auto rv = qInstallMessageHandler(arg0);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:791
// [4] uint qCountTrailingZeroBits(quint64)
extern "C"
uint C_Z22qCountTrailingZeroBitsy(quint64 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:775
// [4] uint qCountTrailingZeroBits(quint16)
extern "C"
uint C_Z22qCountTrailingZeroBitst_1(quint16 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:802
// [4] uint qCountTrailingZeroBits(unsigned long)
extern "C"
uint C_Z22qCountTrailingZeroBitsm_2(unsigned long v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:742
// [4] uint qCountTrailingZeroBits(quint32)
extern "C"
uint C_Z22qCountTrailingZeroBitsj_3(quint32 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:760
// [4] uint qCountTrailingZeroBits(quint8)
extern "C"
uint C_Z22qCountTrailingZeroBitsh_4(quint8 v) {
  return (uint)qCountTrailingZeroBits(v);
}

// Invalid Visibility=Default Availability=Available
// /home/gzleo/oss/qt.gen/headers/QtCore/extra_export.h:6
// [1] bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *)
extern "C"
bool C_Z21qRegisterResourceDataiPKhS0_S0_(int arg0, const unsigned char * arg1, const unsigned char * arg2, const unsigned char * arg3) {
  return (bool)qRegisterResourceData(arg0, arg1, arg2, arg3);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:847
// [4] uint qCountLeadingZeroBits(quint64)
extern "C"
uint C_Z21qCountLeadingZeroBitsy(quint64 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:834
// [4] uint qCountLeadingZeroBits(quint16)
extern "C"
uint C_Z21qCountLeadingZeroBitst_1(quint16 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:862
// [4] uint qCountLeadingZeroBits(unsigned long)
extern "C"
uint C_Z21qCountLeadingZeroBitsm_2(unsigned long v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:807
// [4] uint qCountLeadingZeroBits(quint32)
extern "C"
uint C_Z21qCountLeadingZeroBitsj_3(quint32 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:822
// [4] uint qCountLeadingZeroBits(quint8)
extern "C"
uint C_Z21qCountLeadingZeroBitsh_4(quint8 v) {
  return (uint)qCountLeadingZeroBits(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:93
// [8] QObject * qt_qFindChild_helper(const class QObject *, const class QString &, const struct QMetaObject &, Qt::FindChildOptions)
extern "C"
void* C_Z20qt_qFindChild_helperPK7QObjectRK7QStringRK11QMetaObject6QFlagsIN2Qt15FindChildOptionEE(const QObject * parent, QString* name, QMetaObject* mo, QFlags<Qt::FindChildOption> options) {
  return (void*)qt_qFindChild_helper(parent, *name, *mo, options);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1134
// [8] QString qEnvironmentVariable(const char *, const class QString &)
extern "C"
void* C_Z20qEnvironmentVariablePKcRK7QString(const char * varName, QString* defaultValue) {
  auto rv = qEnvironmentVariable(varName, *defaultValue);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:1133
// [8] QString qEnvironmentVariable(const char *)
extern "C"
void* C_Z20qEnvironmentVariablePKc_1(const char * varName) {
  auto rv = qEnvironmentVariable(varName);
return new QString(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:68
// [-2] void qSetGlobalQHashSeed(int)
extern "C"
void C_Z19qSetGlobalQHashSeedi(int newSeed) {
  qSetGlobalQHashSeed(newSeed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:193
// [-2] void qSetMessagePattern(const class QString &)
extern "C"
void C_Z18qSetMessagePatternRK7QString(QString* messagePattern) {
  qSetMessagePattern(*messagePattern);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:260
// [-2] void qRemovePostRoutine(QtCleanUpFunction)
extern "C"
void C_Z18qRemovePostRoutinePFvvE(QtCleanUpFunction arg0) {
  qRemovePostRoutine(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:236
// [4] float qRadiansToDegrees(float)
extern "C"
float C_Z17qRadiansToDegreesf(float radians) {
  return (float)qRadiansToDegrees(radians);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:241
// [8] double qRadiansToDegrees(double)
extern "C"
double C_Z17qRadiansToDegreesd_1(double radians) {
  return (double)qRadiansToDegrees(radians);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:194
// [8] QString qFormatLogMessage(enum QtMsgType, const class QMessageLogContext &, const class QString &)
extern "C"
void* C_Z17qFormatLogMessage9QtMsgTypeRK18QMessageLogContextRK7QString(QtMsgType type, QMessageLogContext* context, QString* buf) {
  auto rv = qFormatLogMessage(type, *context, *buf);
return new QString(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:226
// [4] float qDegreesToRadians(float)
extern "C"
float C_Z17qDegreesToRadiansf(float degrees) {
  return (float)qDegreesToRadians(degrees);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:231
// [8] double qDegreesToRadians(double)
extern "C"
double C_Z17qDegreesToRadiansd_1(double degrees) {
  return (double)qDegreesToRadians(degrees);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:717
// [4] uint qPopulationCount(quint64)
extern "C"
uint C_Z16qPopulationCounty(quint64 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:706
// [4] uint qPopulationCount(quint16)
extern "C"
uint C_Z16qPopulationCountt_1(quint16 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:732
// [4] uint qPopulationCount(unsigned long)
extern "C"
uint C_Z16qPopulationCountm_2(unsigned long v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:683
// [4] uint qPopulationCount(quint32)
extern "C"
uint C_Z16qPopulationCountj_3(quint32 v) {
  return (uint)qPopulationCount(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qalgorithms.h:696
// [4] uint qPopulationCount(quint8)
extern "C"
uint C_Z16qPopulationCounth_4(quint8 v) {
  return (uint)qPopulationCount(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qhashfunctions.h:67
// [4] int qGlobalQHashSeed()
extern "C"
int C_Z16qGlobalQHashSeedv() {
  return (int)qGlobalQHashSeed();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:895
// [8] void * qReallocAligned(void *, size_t, size_t, size_t)
extern "C"
void* C_Z15qReallocAlignedPvmmm(void * ptr, size_t size, size_t oldsize, size_t alignment) {
  return (void*)qReallocAligned(ptr, size, oldsize, alignment);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:264
// [8] quint64 qNextPowerOfTwo(quint64)
extern "C"
quint64 C_Z15qNextPowerOfTwoy(quint64 v) {
  return (quint64)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:287
// [8] quint64 qNextPowerOfTwo(qint64)
extern "C"
quint64 C_Z15qNextPowerOfTwox_1(qint64 v) {
  return (quint64)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:247
// [4] quint32 qNextPowerOfTwo(quint32)
extern "C"
quint32 C_Z15qNextPowerOfTwoj_2(quint32 v) {
  return (quint32)qNextPowerOfTwo(v);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmath.h:282
// [4] quint32 qNextPowerOfTwo(qint32)
extern "C"
quint32 C_Z15qNextPowerOfTwoi_3(qint32 v) {
  return (quint32)qNextPowerOfTwo(v);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:259
// [-2] void qAddPostRoutine(QtCleanUpFunction)
extern "C"
void C_Z15qAddPostRoutinePFvvE(QtCleanUpFunction arg0) {
  qAddPostRoutine(arg0);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:267
// [40] QTextStreamManipulator qSetFieldWidth(int)
extern "C"
void C_Z14qSetFieldWidthi(int width) {
  auto rv = qSetFieldWidth(width);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:894
// [8] void * qMallocAligned(size_t, size_t)
extern "C"
void* C_Z14qMallocAlignedmm(size_t size, size_t alignment) {
  return (void*)qMallocAligned(size, alignment);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:58
// [4] quint32 qFloatDistance(float, float)
extern "C"
quint32 C_Z14qFloatDistanceff(float a, float b) {
  return (quint32)qFloatDistance(a, b);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qnumeric.h:59
// [8] quint64 qFloatDistance(double, double)
extern "C"
quint64 C_Z14qFloatDistancedd_1(double a, double b) {
  return (quint64)qFloatDistance(a, b);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreapplication.h:258
// [-2] void qAddPreRoutine(QtStartUpFunction)
extern "C"
void C_Z14qAddPreRoutinePFvvE(QtStartUpFunction arg0) {
  qAddPreRoutine(arg0);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:261
// [8] const char * qFlagLocation(const char *)
extern "C"
void* C_Z13qFlagLocationPKc(const char * method) {
  return (void*)qFlagLocation(method);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:182
// [-2] void qErrnoWarning(int, const char *, ...)
extern "C"
void C_Z13qErrnoWarningiPKcz(int code, const char * msg) {
  qErrnoWarning(code, msg);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qlogging.h:183
// [-2] void qErrnoWarning(const char *, ...)
extern "C"
void C_Z13qErrnoWarningPKcz_1(const char * msg) {
  qErrnoWarning(msg);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:681
// [1] bool qSharedBuild()
extern "C"
bool C_Z12qSharedBuildv() {
  return (bool)qSharedBuild();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qglobal.h:896
// [-2] void qFreeAligned(void *)
extern "C"
void C_Z12qFreeAlignedPv(void * ptr) {
  qFreeAligned(ptr);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:687
// [8] QByteArray qUncompress(const class QByteArray &)
extern "C"
void* C_Z11qUncompressRK10QByteArray(QByteArray* data) {
  auto rv = qUncompress(*data);
return new QByteArray(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qbytearray.h:684
// [8] QByteArray qUncompress(const uchar *, int)
extern "C"
void* C_Z11qUncompressPKhi_1(const uchar * data, int nbytes) {
  auto rv = qUncompress(data, nbytes);
return new QByteArray(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:273
// [40] QTextStreamManipulator qSetPadChar(class QChar)
extern "C"
void C_Z11qSetPadChar5QChar(QChar* ch) {
  auto rv = qSetPadChar(*ch);
/*return rv;*/
}

//  main block end
