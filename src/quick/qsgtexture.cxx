#include <qrect.h>
// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
// src-file: /QtQuick/qsgtexture.h
// dst-file: /src/quick/qsgtexture.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgtexture.h>

extern "C" {

int QSGTexture_Class_Size()
{
  return sizeof(QSGTexture);
}

int QSGDynamicTexture_Class_Size()
{
  return sizeof(QSGDynamicTexture);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgtexture_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgtexture.h', line 90, column 19>
//   // proto:  QRectF QSGTexture::convertToNormalizedSourceRect(const QRectF & rect);
if (true) {
  auto f = [](const QRectF & arg1) {
    ((QSGTexture*)0)->convertToNormalizedSourceRect(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF convertToNormalizedSourceRect(const class QRectF &)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QSGTexture_SlotProxy here
class QSGTexture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGTexture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QSGTexture_SlotProxy* QSGTexture_SlotProxy_new()
  {
    return new QSGTexture_SlotProxy();
  }
};

// QSGDynamicTexture_SlotProxy here
class QSGDynamicTexture_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QSGDynamicTexture_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/quick/qsgtexture.moc"

extern "C" {
  QSGDynamicTexture_SlotProxy* QSGDynamicTexture_SlotProxy_new()
  {
    return new QSGDynamicTexture_SlotProxy();
  }
};

// <= body block end

