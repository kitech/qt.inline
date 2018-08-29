//  header block begin
// since 0x040200
// /usr/include/qt/QtWidgets/qfontcombobox.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontcombobox.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFontComboBox is pure virtual: false
// QFontComboBox has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFontComboBox_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontComboBox_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontComboBox_t qt_meta_stringdata_MyQFontComboBox = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQFontComboBox"
  },
  "MyQFontComboBox"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontComboBox[] = {
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
class Q_DECL_EXPORT MyQFontComboBox : public QFontComboBox {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFontComboBox::staticMetaObject,
  qt_meta_stringdata_MyQFontComboBox.data,
  qt_meta_data_MyQFontComboBox,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQFontComboBox.stringdata0))
      return static_cast<void*>(this);
  return QFontComboBox::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFontComboBox::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQFontComboBox() {}
// void QFontComboBox(QWidget *)
MyQFontComboBox(QWidget * parent) : QFontComboBox(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QFontComboBox::event(e);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:90
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QFontComboBox5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QFontComboBox*)this_)->QFontComboBox::event(e);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox10metaObjectEv(void *this_) {
  return (void*)((QFontComboBox*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontComboBox11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFontComboBox*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QFontComboBox11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFontComboBox*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontComboBox2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFontComboBox::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontComboBox6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFontComboBox::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:61
// [-2] void QFontComboBox(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontComboBoxC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQFontComboBox*)(0);
  return  new MyQFontComboBox(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:62
// [-2] void ~QFontComboBox()
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBoxD2Ev(void *this_) {
  delete (QFontComboBox*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:64
// [-2] void setWritingSystem(QFontDatabase::WritingSystem)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox16setWritingSystemEN13QFontDatabase13WritingSystemE(void *this_, QFontDatabase::WritingSystem arg0) {
  ((QFontComboBox*)this_)->setWritingSystem(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:65
// [4] QFontDatabase::WritingSystem writingSystem()
extern "C" Q_DECL_EXPORT
QFontDatabase::WritingSystem C_ZNK13QFontComboBox13writingSystemEv(void *this_) {
  return (QFontDatabase::WritingSystem)((QFontComboBox*)this_)->writingSystem();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:77
// [-2] void setFontFilters(QFontComboBox::FontFilters)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox14setFontFiltersE6QFlagsINS_10FontFilterEE(void *this_, QFlags<QFontComboBox::FontFilter> filters) {
  ((QFontComboBox*)this_)->setFontFilters(filters);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:78
// [4] QFontComboBox::FontFilters fontFilters()
extern "C" Q_DECL_EXPORT
QFontComboBox::FontFilters* C_ZNK13QFontComboBox11fontFiltersEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->fontFilters();
return new QFontComboBox::FontFilters(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:80
// [16] QFont currentFont()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox11currentFontEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->currentFont();
return new QFont(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:81
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontComboBox8sizeHintEv(void *this_) {
  auto rv = ((QFontComboBox*)this_)->sizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:84
// [-2] void setCurrentFont(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox14setCurrentFontERK5QFont(void *this_, QFont* f) {
  ((QFontComboBox*)this_)->setCurrentFont(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:87
// [-2] void currentFontChanged(const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFontComboBox18currentFontChangedERK5QFont(void *this_, QFont* f) {
  ((QFontComboBox*)this_)->currentFontChanged(*f);
}

//  main block end
