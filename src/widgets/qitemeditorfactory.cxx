//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(itemviews)
// /usr/include/qt/QtWidgets/qitemeditorfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemeditorfactory.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemEditorFactory is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qitemeditorfactory(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemeditorfactory.h:98
// [-2] void QItemEditorFactory() 
// (12)qm2809309265 (27)_ZN18QItemEditorFactoryC2Ev
/*void* qm2809309265()*/{
  ;
  this_ =  new QItemEditorFactory();
  this_ =  new MyQItemEditorFactory();
}


/*void C_ZN18QItemEditorFactoryD2Ev(void *this_)*/ {
  delete (QItemEditorFactory*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qitemeditorfactory
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
