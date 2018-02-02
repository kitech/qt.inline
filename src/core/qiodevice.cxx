//  header block begin
// /usr/include/qt/QtCore/qiodevice.h
#include <qiodevice.h>
#include <QtCore>

// QIODevice is pure virtual: true
// QIODevice has virtual projected: true
//  header block end

//  main block begin
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:166
// [8] qint64 readData(char *, qint64)
extern "C"
void* callback_ZN9QIODevice8readDataEPcx_fnptr = 0;
extern "C" void set_callback_ZN9QIODevice8readDataEPcx(void*cbfn)
{ callback_ZN9QIODevice8readDataEPcx_fnptr = cbfn; }
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:167
// [8] qint64 readLineData(char *, qint64)
extern "C"
void* callback_ZN9QIODevice12readLineDataEPcx_fnptr = 0;
extern "C" void set_callback_ZN9QIODevice12readLineDataEPcx(void*cbfn)
{ callback_ZN9QIODevice12readLineDataEPcx_fnptr = cbfn; }
// Protected purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:168
// [8] qint64 writeData(const char *, qint64)
extern "C"
void* callback_ZN9QIODevice9writeDataEPKcx_fnptr = 0;
extern "C" void set_callback_ZN9QIODevice9writeDataEPKcx(void*cbfn)
{ callback_ZN9QIODevice9writeDataEPKcx_fnptr = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:172
// [-2] void setErrorString(const class QString &)
extern "C"
void* callback_ZN9QIODevice14setErrorStringERK7QString_fnptr = 0;
extern "C" void set_callback_ZN9QIODevice14setErrorStringERK7QString(void*cbfn)
{ callback_ZN9QIODevice14setErrorStringERK7QString_fnptr = cbfn; }

class MyQIODevice : public QIODevice {
public:
  virtual ~MyQIODevice() {}
// void QIODevice()
MyQIODevice() : QIODevice() {}
// void QIODevice(class QObject *)
MyQIODevice(QObject * parent) : QIODevice(parent) {}
// qint64 readData(char *, qint64)
  virtual qint64 readData(char * data, qint64 maxlen) {
    auto fnptr = ((qint64 (*)(void* , char *, qint64))(callback_ZN9QIODevice8readDataEPcx_fnptr));
    if (fnptr != 0) {
      fnptr(this , data, maxlen);
    }
    return QIODevice::readData(data, maxlen);
  }
// qint64 readLineData(char *, qint64)
  virtual qint64 readLineData(char * data, qint64 maxlen) {
    auto fnptr = ((qint64 (*)(void* , char *, qint64))(callback_ZN9QIODevice12readLineDataEPcx_fnptr));
    if (fnptr != 0) {
      fnptr(this , data, maxlen);
    }
    return QIODevice::readLineData(data, maxlen);
  }
// qint64 writeData(const char *, qint64)
  virtual qint64 writeData(const char * data, qint64 len) {
    auto fnptr = ((qint64 (*)(void* , const char *, qint64))(callback_ZN9QIODevice9writeDataEPKcx_fnptr));
    if (fnptr != 0) {
      fnptr(this , data, len);
    }
    return QIODevice::writeData(data, len);
  }
// void setErrorString(const class QString &)
  virtual void setErrorString(const QString & errorString) {
    auto fnptr = ((void (*)(void* , QString*))(callback_ZN9QIODevice14setErrorStringERK7QString_fnptr));
    if (fnptr != 0) {
      fnptr(this , (QString*)&errorString);
    }
    QIODevice::setErrorString(errorString);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:68
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK9QIODevice10metaObjectEv(void *this_) {
  return (void*)((QIODevice*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:83
// [-2] void QIODevice()
extern "C"
void* C_ZN9QIODeviceC1Ev() {
  auto _nilp = (MyQIODevice*)(0);
  return 0; // new MyQIODevice();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:85
// [-2] void QIODevice(class QObject *)
extern "C"
void* C_ZN9QIODeviceC1EP7QObject(QObject * parent) {
  auto _nilp = (MyQIODevice*)(0);
  return 0; // new MyQIODevice(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:87
// [-2] void ~QIODevice()
extern "C"
void C_ZN9QIODeviceD2Ev(void *this_) {
  delete (QIODevice*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:89
// [4] QIODevice::OpenMode openMode()
extern "C"
void C_ZNK9QIODevice8openModeEv(void *this_) {
  auto rv = ((QIODevice*)this_)->openMode();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:91
// [-2] void setTextModeEnabled(_Bool)
extern "C"
void C_ZN9QIODevice18setTextModeEnabledEb(void *this_, bool enabled) {
  ((QIODevice*)this_)->setTextModeEnabled(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:92
// [1] bool isTextModeEnabled()
extern "C"
bool C_ZNK9QIODevice17isTextModeEnabledEv(void *this_) {
  return (bool)((QIODevice*)this_)->isTextModeEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:94
// [1] bool isOpen()
extern "C"
bool C_ZNK9QIODevice6isOpenEv(void *this_) {
  return (bool)((QIODevice*)this_)->isOpen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:95
// [1] bool isReadable()
extern "C"
bool C_ZNK9QIODevice10isReadableEv(void *this_) {
  return (bool)((QIODevice*)this_)->isReadable();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:96
// [1] bool isWritable()
extern "C"
bool C_ZNK9QIODevice10isWritableEv(void *this_) {
  return (bool)((QIODevice*)this_)->isWritable();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:97
// [1] bool isSequential()
extern "C"
bool C_ZNK9QIODevice12isSequentialEv(void *this_) {
  return (bool)((QIODevice*)this_)->isSequential();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:99
// [4] int readChannelCount()
extern "C"
int C_ZNK9QIODevice16readChannelCountEv(void *this_) {
  return (int)((QIODevice*)this_)->readChannelCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:100
// [4] int writeChannelCount()
extern "C"
int C_ZNK9QIODevice17writeChannelCountEv(void *this_) {
  return (int)((QIODevice*)this_)->writeChannelCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:101
// [4] int currentReadChannel()
extern "C"
int C_ZNK9QIODevice18currentReadChannelEv(void *this_) {
  return (int)((QIODevice*)this_)->currentReadChannel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:102
// [-2] void setCurrentReadChannel(int)
extern "C"
void C_ZN9QIODevice21setCurrentReadChannelEi(void *this_, int channel) {
  ((QIODevice*)this_)->setCurrentReadChannel(channel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:103
// [4] int currentWriteChannel()
extern "C"
int C_ZNK9QIODevice19currentWriteChannelEv(void *this_) {
  return (int)((QIODevice*)this_)->currentWriteChannel();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:104
// [-2] void setCurrentWriteChannel(int)
extern "C"
void C_ZN9QIODevice22setCurrentWriteChannelEi(void *this_, int channel) {
  ((QIODevice*)this_)->setCurrentWriteChannel(channel);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:107
// [-2] void close()
extern "C"
void C_ZN9QIODevice5closeEv(void *this_) {
  ((QIODevice*)this_)->close();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:111
// [8] qint64 pos()
extern "C"
qint64 C_ZNK9QIODevice3posEv(void *this_) {
  return (qint64)((QIODevice*)this_)->pos();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:112
// [8] qint64 size()
extern "C"
qint64 C_ZNK9QIODevice4sizeEv(void *this_) {
  return (qint64)((QIODevice*)this_)->size();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:113
// [1] bool seek(qint64)
extern "C"
bool C_ZN9QIODevice4seekEx(void *this_, qint64 pos) {
  return (bool)((QIODevice*)this_)->seek(pos);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:114
// [1] bool atEnd()
extern "C"
bool C_ZNK9QIODevice5atEndEv(void *this_) {
  return (bool)((QIODevice*)this_)->atEnd();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:115
// [1] bool reset()
extern "C"
bool C_ZN9QIODevice5resetEv(void *this_) {
  return (bool)((QIODevice*)this_)->reset();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:117
// [8] qint64 bytesAvailable()
extern "C"
qint64 C_ZNK9QIODevice14bytesAvailableEv(void *this_) {
  return (qint64)((QIODevice*)this_)->bytesAvailable();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:118
// [8] qint64 bytesToWrite()
extern "C"
qint64 C_ZNK9QIODevice12bytesToWriteEv(void *this_) {
  return (qint64)((QIODevice*)this_)->bytesToWrite();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:120
// [8] qint64 read(char *, qint64)
extern "C"
qint64 C_ZN9QIODevice4readEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->read(data, maxlen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:121
// [8] QByteArray read(qint64)
extern "C"
void* C_ZN9QIODevice4readEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->read(maxlen);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:122
// [8] QByteArray readAll()
extern "C"
void* C_ZN9QIODevice7readAllEv(void *this_) {
  auto rv = ((QIODevice*)this_)->readAll();
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:123
// [8] qint64 readLine(char *, qint64)
extern "C"
qint64 C_ZN9QIODevice8readLineEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->readLine(data, maxlen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:124
// [8] QByteArray readLine(qint64)
extern "C"
void* C_ZN9QIODevice8readLineEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->readLine(maxlen);
return new QByteArray(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:125
// [1] bool canReadLine()
extern "C"
bool C_ZNK9QIODevice11canReadLineEv(void *this_) {
  return (bool)((QIODevice*)this_)->canReadLine();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:127
// [-2] void startTransaction()
extern "C"
void C_ZN9QIODevice16startTransactionEv(void *this_) {
  ((QIODevice*)this_)->startTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:128
// [-2] void commitTransaction()
extern "C"
void C_ZN9QIODevice17commitTransactionEv(void *this_) {
  ((QIODevice*)this_)->commitTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:129
// [-2] void rollbackTransaction()
extern "C"
void C_ZN9QIODevice19rollbackTransactionEv(void *this_) {
  ((QIODevice*)this_)->rollbackTransaction();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:130
// [1] bool isTransactionStarted()
extern "C"
bool C_ZNK9QIODevice20isTransactionStartedEv(void *this_) {
  return (bool)((QIODevice*)this_)->isTransactionStarted();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:132
// [8] qint64 write(const char *, qint64)
extern "C"
qint64 C_ZN9QIODevice5writeEPKcx(void *this_, const char * data, qint64 len) {
  return (qint64)((QIODevice*)this_)->write(data, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:133
// [8] qint64 write(const char *)
extern "C"
qint64 C_ZN9QIODevice5writeEPKc(void *this_, const char * data) {
  return (qint64)((QIODevice*)this_)->write(data);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:134
// [8] qint64 write(const class QByteArray &)
extern "C"
qint64 C_ZN9QIODevice5writeERK10QByteArray(void *this_, QByteArray* data) {
  return (qint64)((QIODevice*)this_)->write(*data);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:137
// [8] qint64 peek(char *, qint64)
extern "C"
qint64 C_ZN9QIODevice4peekEPcx(void *this_, char * data, qint64 maxlen) {
  return (qint64)((QIODevice*)this_)->peek(data, maxlen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:138
// [8] QByteArray peek(qint64)
extern "C"
void* C_ZN9QIODevice4peekEx(void *this_, qint64 maxlen) {
  auto rv = ((QIODevice*)this_)->peek(maxlen);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:139
// [8] qint64 skip(qint64)
extern "C"
qint64 C_ZN9QIODevice4skipEx(void *this_, qint64 maxSize) {
  return (qint64)((QIODevice*)this_)->skip(maxSize);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:141
// [1] bool waitForReadyRead(int)
extern "C"
bool C_ZN9QIODevice16waitForReadyReadEi(void *this_, int msecs) {
  return (bool)((QIODevice*)this_)->waitForReadyRead(msecs);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:142
// [1] bool waitForBytesWritten(int)
extern "C"
bool C_ZN9QIODevice19waitForBytesWrittenEi(void *this_, int msecs) {
  return (bool)((QIODevice*)this_)->waitForBytesWritten(msecs);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:144
// [-2] void ungetChar(char)
extern "C"
void C_ZN9QIODevice9ungetCharEc(void *this_, char c) {
  ((QIODevice*)this_)->ungetChar(c);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:145
// [1] bool putChar(char)
extern "C"
bool C_ZN9QIODevice7putCharEc(void *this_, char c) {
  return (bool)((QIODevice*)this_)->putChar(c);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:146
// [1] bool getChar(char *)
extern "C"
bool C_ZN9QIODevice7getCharEPc(void *this_, char * c) {
  return (bool)((QIODevice*)this_)->getChar(c);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:148
// [8] QString errorString()
extern "C"
void* C_ZNK9QIODevice11errorStringEv(void *this_) {
  auto rv = ((QIODevice*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:152
// [-2] void readyRead()
extern "C"
void C_ZN9QIODevice9readyReadEv(void *this_) {
  ((QIODevice*)this_)->readyRead();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:153
// [-2] void channelReadyRead(int)
extern "C"
void C_ZN9QIODevice16channelReadyReadEi(void *this_, int channel) {
  ((QIODevice*)this_)->channelReadyRead(channel);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:154
// [-2] void bytesWritten(qint64)
extern "C"
void C_ZN9QIODevice12bytesWrittenEx(void *this_, qint64 bytes) {
  ((QIODevice*)this_)->bytesWritten(bytes);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:155
// [-2] void channelBytesWritten(int, qint64)
extern "C"
void C_ZN9QIODevice19channelBytesWrittenEix(void *this_, int channel, qint64 bytes) {
  ((QIODevice*)this_)->channelBytesWritten(channel, bytes);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:156
// [-2] void aboutToClose()
extern "C"
void C_ZN9QIODevice12aboutToCloseEv(void *this_) {
  ((QIODevice*)this_)->aboutToClose();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qiodevice.h:157
// [-2] void readChannelFinished()
extern "C"
void C_ZN9QIODevice19readChannelFinishedEv(void *this_) {
  ((QIODevice*)this_)->readChannelFinished();
}
//  main block end
