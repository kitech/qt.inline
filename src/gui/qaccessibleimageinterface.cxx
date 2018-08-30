//  header block begin
// /usr/include/qt/QtGui/qaccessible.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qaccessible.h>
#include <QtGui>
#include "callback_inherit.h"

// QAccessibleImageInterface is pure virtual: true
// QAccessibleImageInterface has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAccessibleImageInterface_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAccessibleImageInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAccessibleImageInterface_t qt_meta_stringdata_MyQAccessibleImageInterface = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQAccessibleImageInterface"
  },
  "MyQAccessibleImageInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAccessibleImageInterface[] = {
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
class Q_DECL_EXPORT MyQAccessibleImageInterface : public QAccessibleImageInterface {
public:
  virtual ~MyQAccessibleImageInterface() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString imageDescription()
  virtual QString imageDescription() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageDescription", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize imageSize()
  virtual QSize imageSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QPoint imagePosition()
  virtual QPoint imagePosition() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imagePosition", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QPoint){};}
    auto prv = (QPoint*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QPoint
    } else {
    return (QPoint){};
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:657
// [8] QString imageDescription()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:658
// [8] QSize imageSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:659
// [8] QPoint imagePosition()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:655
// [-2] void ~QAccessibleImageInterface()
extern "C" Q_DECL_EXPORT
void C_ZN25QAccessibleImageInterfaceD2Ev(void *this_) {
  delete (QAccessibleImageInterface*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:657
// [8] QString imageDescription()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleImageInterface16imageDescriptionEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imageDescription();
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:658
// [8] QSize imageSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleImageInterface9imageSizeEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imageSize();
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:659
// [8] QPoint imagePosition()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAccessibleImageInterface13imagePositionEv(void *this_) {
  auto rv = ((QAccessibleImageInterface*)this_)->imagePosition();
return new QPoint(rv);
}

//  main block end
