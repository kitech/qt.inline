//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// since 0x040200
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorFactory is pure virtual: false
// QItemEditorFactory has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQItemEditorFactory_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemEditorFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemEditorFactory_t qt_meta_stringdata_MyQItemEditorFactory = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQItemEditorFactory"
  },
  "MyQItemEditorFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemEditorFactory[] = {
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
class Q_DECL_EXPORT MyQItemEditorFactory : public QItemEditorFactory {
public:
  virtual ~MyQItemEditorFactory() {}
// void QItemEditorFactory()
MyQItemEditorFactory() : QItemEditorFactory() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// [-2] void QItemEditorFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN18QItemEditorFactoryC2Ev() {
  return  new QItemEditorFactory();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:99
// [-2] void ~QItemEditorFactory()
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactoryD2Ev(void *this_) {
  delete (QItemEditorFactory*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:101
// [8] QWidget * createEditor(int, QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QItemEditorFactory12createEditorEiP7QWidget(void *this_, int userType, QWidget * parent) {
  return (void*)((QItemEditorFactory*)this_)->createEditor(userType, parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:102
// [8] QByteArray valuePropertyName(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QItemEditorFactory17valuePropertyNameEi(void *this_, int userType) {
  auto rv = ((QItemEditorFactory*)this_)->valuePropertyName(userType);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:104
// [-2] void registerEditor(int, QItemEditorCreatorBase *)
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactory14registerEditorEiP22QItemEditorCreatorBase(void *this_, int userType, QItemEditorCreatorBase * creator) {
  ((QItemEditorFactory*)this_)->registerEditor(userType, creator);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:106
// [8] const QItemEditorFactory * defaultFactory()
extern "C" Q_DECL_EXPORT
void* C_ZN18QItemEditorFactory14defaultFactoryEv() {
  return (void*)QItemEditorFactory::defaultFactory();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:107
// [-2] void setDefaultFactory(QItemEditorFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN18QItemEditorFactory17setDefaultFactoryEPS_(QItemEditorFactory * factory) {
  QItemEditorFactory::setDefaultFactory(factory);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(itemviews)
#endif // #ifndef QT_MINIMAL
//  footer block end
