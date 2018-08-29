//  header block begin
// since 0x040500
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qabstracttextdocumentlayout.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextObjectInterface is pure virtual: true
// QTextObjectInterface has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextObjectInterface_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextObjectInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextObjectInterface_t qt_meta_stringdata_MyQTextObjectInterface = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQTextObjectInterface"
  },
  "MyQTextObjectInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextObjectInterface[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQTextObjectInterface : public QTextObjectInterface {
public:
  virtual ~MyQTextObjectInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [16] QSizeF intrinsicSize(QTextDocument *, int, const QTextFormat &)
  virtual QSizeF intrinsicSize(QTextDocument * doc, int posInDocument, const QTextFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"intrinsicSize", &handled, 3, (uint64_t)doc, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSizeF){};}
    auto prv = (QSizeF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSizeF
    } else {
    return (QSizeF){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void drawObject(QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &)
  virtual void drawObject(QPainter * painter, const QRectF & rect, QTextDocument * doc, int posInDocument, const QTextFormat & format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawObject", &handled, 5, (uint64_t)painter, (uint64_t)&rect, (uint64_t)doc, (uint64_t)posInDocument, (uint64_t)&format, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QTextObjectInterface::drawObject(painter, rect, doc, posInDocument, format);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:142
// [16] QSizeF intrinsicSize(QTextDocument *, int, const QTextFormat &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:143
// [-2] void drawObject(QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:141
// [-2] void ~QTextObjectInterface()
extern "C" Q_DECL_EXPORT
void C_ZN20QTextObjectInterfaceD2Ev(void *this_) {
  delete (QTextObjectInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:142
// [16] QSizeF intrinsicSize(QTextDocument *, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN20QTextObjectInterface13intrinsicSizeEP13QTextDocumentiRK11QTextFormat(void *this_, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  auto rv = ((QTextObjectInterface*)this_)->intrinsicSize(doc, posInDocument, *format);
return new QSizeF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qabstracttextdocumentlayout.h:143
// [-2] void drawObject(QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN20QTextObjectInterface10drawObjectEP8QPainterRK6QRectFP13QTextDocumentiRK11QTextFormat(void *this_, QPainter * painter, QRectF* rect, QTextDocument * doc, int posInDocument, QTextFormat* format) {
  ((QTextObjectInterface*)this_)->drawObject(painter, *rect, doc, posInDocument, *format);
}

//  main block end
