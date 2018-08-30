//  header block begin
// /usr/include/qt/QtWidgets/qstackedlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstackedlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStackedLayout is pure virtual: false
// QStackedLayout has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStackedLayout_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStackedLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStackedLayout_t qt_meta_stringdata_MyQStackedLayout = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQStackedLayout"
  },
  "MyQStackedLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStackedLayout[] = {
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
class Q_DECL_EXPORT MyQStackedLayout : public QStackedLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QStackedLayout::staticMetaObject,
  qt_meta_stringdata_MyQStackedLayout.data,
  qt_meta_data_MyQStackedLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQStackedLayout.stringdata0))
      return static_cast<void*>(this);
  return QStackedLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QStackedLayout::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQStackedLayout() {}
// void QStackedLayout()
MyQStackedLayout() : QStackedLayout() {}
// void QStackedLayout(QWidget *)
MyQStackedLayout(QWidget * parent) : QStackedLayout(parent) {}
// void QStackedLayout(QLayout *)
MyQStackedLayout(QLayout * parentLayout) : QStackedLayout(parentLayout) {}
};

extern "C" Q_DECL_EXPORT
void C_QStackedLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQStackedLayout* qo = (MyQStackedLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout10metaObjectEv(void *this_) {
  return (void*)((QStackedLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QStackedLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QStackedLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStackedLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QStackedLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:66
// [-2] void QStackedLayout()
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayoutC2Ev() {
  return  new MyQStackedLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:67
// [-2] void QStackedLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayoutC2EP7QWidget(QWidget * parent) {
  return  new MyQStackedLayout(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:68
// [-2] void QStackedLayout(QLayout *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayoutC2EP7QLayout(QLayout * parentLayout) {
  return  new MyQStackedLayout(parentLayout);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:69
// [-2] void ~QStackedLayout()
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayoutD2Ev(void *this_) {
  delete (QStackedLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:71
// [4] int addWidget(QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedLayout9addWidgetEP7QWidget(void *this_, QWidget * w) {
  return (int)((QStackedLayout*)this_)->addWidget(w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:72
// [4] int insertWidget(int, QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZN14QStackedLayout12insertWidgetEiP7QWidget(void *this_, int index, QWidget * w) {
  return (int)((QStackedLayout*)this_)->insertWidget(index, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:74
// [8] QWidget * currentWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout13currentWidgetEv(void *this_) {
  return (void*)((QStackedLayout*)this_)->currentWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:75
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedLayout12currentIndexEv(void *this_) {
  return (int)((QStackedLayout*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:77
// [8] QWidget * widget(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout6widgetEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->widget(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:78
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedLayout5countEv(void *this_) {
  return (int)((QStackedLayout*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:80
// [4] QStackedLayout::StackingMode stackingMode()
extern "C" Q_DECL_EXPORT
QStackedLayout::StackingMode C_ZNK14QStackedLayout12stackingModeEv(void *this_) {
  return (QStackedLayout::StackingMode)((QStackedLayout*)this_)->stackingMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:81
// [-2] void setStackingMode(QStackedLayout::StackingMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout15setStackingModeENS_12StackingModeE(void *this_, QStackedLayout::StackingMode stackingMode) {
  ((QStackedLayout*)this_)->setStackingMode(stackingMode);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:84
// [-2] void addItem(QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * item) {
  ((QStackedLayout*)this_)->addItem(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:85
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout8sizeHintEv(void *this_) {
  auto rv = ((QStackedLayout*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:86
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout11minimumSizeEv(void *this_) {
  auto rv = ((QStackedLayout*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:87
// [8] QLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QStackedLayout6itemAtEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->itemAt(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:88
// [8] QLayoutItem * takeAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QStackedLayout6takeAtEi(void *this_, int arg0) {
  return (void*)((QStackedLayout*)this_)->takeAt(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:89
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout11setGeometryERK5QRect(void *this_, QRect* rect) {
  ((QStackedLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:90
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QStackedLayout17hasHeightForWidthEv(void *this_) {
  return (bool)((QStackedLayout*)this_)->hasHeightForWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:91
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK14QStackedLayout14heightForWidthEi(void *this_, int width) {
  return (int)((QStackedLayout*)this_)->heightForWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:94
// [-2] void widgetRemoved(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout13widgetRemovedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->widgetRemoved(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:95
// [-2] void currentChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout14currentChangedEi(void *this_, int index) {
  ((QStackedLayout*)this_)->currentChanged(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:98
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout15setCurrentIndexEi(void *this_, int index) {
  ((QStackedLayout*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstackedlayout.h:99
// [-2] void setCurrentWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN14QStackedLayout16setCurrentWidgetEP7QWidget(void *this_, QWidget * w) {
  ((QStackedLayout*)this_)->setCurrentWidget(w);
}

//  main block end
