//  header block begin
// since 0x040400
// /usr/include/qt/QtWidgets/qformlayout.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qformlayout.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFormLayout is pure virtual: false
// QFormLayout has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFormLayout_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFormLayout_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFormLayout_t qt_meta_stringdata_MyQFormLayout = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQFormLayout"
  },
  "MyQFormLayout"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFormLayout[] = {
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
class Q_DECL_EXPORT MyQFormLayout : public QFormLayout {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QFormLayout::staticMetaObject,
  qt_meta_stringdata_MyQFormLayout.data,
  qt_meta_data_MyQFormLayout,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQFormLayout.stringdata0))
      return static_cast<void*>(this);
  return QFormLayout::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QFormLayout::qt_metacall(_c, _id, _a);
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
  virtual ~MyQFormLayout() {}
// void QFormLayout(QWidget *)
MyQFormLayout(QWidget * parent) : QFormLayout(parent) {}
};

extern "C" Q_DECL_EXPORT
void C_QFormLayout_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQFormLayout* qo = (MyQFormLayout*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout10metaObjectEv(void *this_) {
  return (void*)((QFormLayout*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFormLayout11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFormLayout*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN11QFormLayout11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFormLayout*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFormLayout2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFormLayout::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFormLayout6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFormLayout::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:91
// [-2] void QFormLayout(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFormLayoutC2EP7QWidget(QWidget * parent) {
  return  new MyQFormLayout(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:92
// [-2] void ~QFormLayout()
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayoutD2Ev(void *this_) {
  delete (QFormLayout*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:94
// [-2] void setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout20setFieldGrowthPolicyENS_17FieldGrowthPolicyE(void *this_, QFormLayout::FieldGrowthPolicy policy) {
  ((QFormLayout*)this_)->setFieldGrowthPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:95
// [4] QFormLayout::FieldGrowthPolicy fieldGrowthPolicy()
extern "C" Q_DECL_EXPORT
QFormLayout::FieldGrowthPolicy C_ZNK11QFormLayout17fieldGrowthPolicyEv(void *this_) {
  return (QFormLayout::FieldGrowthPolicy)((QFormLayout*)this_)->fieldGrowthPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:96
// [-2] void setRowWrapPolicy(QFormLayout::RowWrapPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout16setRowWrapPolicyENS_13RowWrapPolicyE(void *this_, QFormLayout::RowWrapPolicy policy) {
  ((QFormLayout*)this_)->setRowWrapPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:97
// [4] QFormLayout::RowWrapPolicy rowWrapPolicy()
extern "C" Q_DECL_EXPORT
QFormLayout::RowWrapPolicy C_ZNK11QFormLayout13rowWrapPolicyEv(void *this_) {
  return (QFormLayout::RowWrapPolicy)((QFormLayout*)this_)->rowWrapPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:98
// [-2] void setLabelAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout17setLabelAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QFormLayout*)this_)->setLabelAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:99
// [4] Qt::Alignment labelAlignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QFormLayout14labelAlignmentEv(void *this_) {
  return (Qt::Alignment)((QFormLayout*)this_)->labelAlignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:100
// [-2] void setFormAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout16setFormAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QFormLayout*)this_)->setFormAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:101
// [4] Qt::Alignment formAlignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK11QFormLayout13formAlignmentEv(void *this_) {
  return (Qt::Alignment)((QFormLayout*)this_)->formAlignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:103
// [-2] void setHorizontalSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout20setHorizontalSpacingEi(void *this_, int spacing) {
  ((QFormLayout*)this_)->setHorizontalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:104
// [4] int horizontalSpacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout17horizontalSpacingEv(void *this_) {
  return (int)((QFormLayout*)this_)->horizontalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:105
// [-2] void setVerticalSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout18setVerticalSpacingEi(void *this_, int spacing) {
  ((QFormLayout*)this_)->setVerticalSpacing(spacing);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:106
// [4] int verticalSpacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout15verticalSpacingEv(void *this_) {
  return (int)((QFormLayout*)this_)->verticalSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:108
// [4] int spacing()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout7spacingEv(void *this_) {
  return (int)((QFormLayout*)this_)->spacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:109
// [-2] void setSpacing(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout10setSpacingEi(void *this_, int arg0) {
  ((QFormLayout*)this_)->setSpacing(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:111
// [-2] void addRow(QWidget *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowEP7QWidgetS1_(void *this_, QWidget * label, QWidget * field) {
  ((QFormLayout*)this_)->addRow(label, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:112
// [-2] void addRow(QWidget *, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowEP7QWidgetP7QLayout(void *this_, QWidget * label, QLayout * field) {
  ((QFormLayout*)this_)->addRow(label, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:113
// [-2] void addRow(const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowERK7QStringP7QWidget(void *this_, QString* labelText, QWidget * field) {
  ((QFormLayout*)this_)->addRow(*labelText, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:114
// [-2] void addRow(const QString &, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowERK7QStringP7QLayout(void *this_, QString* labelText, QLayout * field) {
  ((QFormLayout*)this_)->addRow(*labelText, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:115
// [-2] void addRow(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowEP7QWidget(void *this_, QWidget * widget) {
  ((QFormLayout*)this_)->addRow(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:116
// [-2] void addRow(QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout6addRowEP7QLayout(void *this_, QLayout * layout) {
  ((QFormLayout*)this_)->addRow(layout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:118
// [-2] void insertRow(int, QWidget *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiP7QWidgetS1_(void *this_, int row, QWidget * label, QWidget * field) {
  ((QFormLayout*)this_)->insertRow(row, label, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:119
// [-2] void insertRow(int, QWidget *, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiP7QWidgetP7QLayout(void *this_, int row, QWidget * label, QLayout * field) {
  ((QFormLayout*)this_)->insertRow(row, label, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:120
// [-2] void insertRow(int, const QString &, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiRK7QStringP7QWidget(void *this_, int row, QString* labelText, QWidget * field) {
  ((QFormLayout*)this_)->insertRow(row, *labelText, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:121
// [-2] void insertRow(int, const QString &, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiRK7QStringP7QLayout(void *this_, int row, QString* labelText, QLayout * field) {
  ((QFormLayout*)this_)->insertRow(row, *labelText, field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:122
// [-2] void insertRow(int, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiP7QWidget(void *this_, int row, QWidget * widget) {
  ((QFormLayout*)this_)->insertRow(row, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:123
// [-2] void insertRow(int, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9insertRowEiP7QLayout(void *this_, int row, QLayout * layout) {
  ((QFormLayout*)this_)->insertRow(row, layout);
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:125
// [-2] void removeRow(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9removeRowEi(void *this_, int row) {
  ((QFormLayout*)this_)->removeRow(row);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:126
// [-2] void removeRow(QWidget *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9removeRowEP7QWidget(void *this_, QWidget * widget) {
  ((QFormLayout*)this_)->removeRow(widget);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:127
// [-2] void removeRow(QLayout *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9removeRowEP7QLayout(void *this_, QLayout * layout) {
  ((QFormLayout*)this_)->removeRow(layout);
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:129
// [16] QFormLayout::TakeRowResult takeRow(int)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout7takeRowEi(void *this_, int row) {
  auto rv = ((QFormLayout*)this_)->takeRow(row);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:130
// [16] QFormLayout::TakeRowResult takeRow(QWidget *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout7takeRowEP7QWidget(void *this_, QWidget * widget) {
  auto rv = ((QFormLayout*)this_)->takeRow(widget);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtWidgets/qformlayout.h:131
// [16] QFormLayout::TakeRowResult takeRow(QLayout *)
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout7takeRowEP7QLayout(void *this_, QLayout * layout) {
  auto rv = ((QFormLayout*)this_)->takeRow(layout);
/*return rv;*/
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:133
// [-2] void setItem(int, QFormLayout::ItemRole, QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout7setItemEiNS_8ItemRoleEP11QLayoutItem(void *this_, int row, QFormLayout::ItemRole role, QLayoutItem * item) {
  ((QFormLayout*)this_)->setItem(row, role, item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:134
// [-2] void setWidget(int, QFormLayout::ItemRole, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9setWidgetEiNS_8ItemRoleEP7QWidget(void *this_, int row, QFormLayout::ItemRole role, QWidget * widget) {
  ((QFormLayout*)this_)->setWidget(row, role, widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:135
// [-2] void setLayout(int, QFormLayout::ItemRole, QLayout *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout9setLayoutEiNS_8ItemRoleEP7QLayout(void *this_, int row, QFormLayout::ItemRole role, QLayout * layout) {
  ((QFormLayout*)this_)->setLayout(row, role, layout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:137
// [8] QLayoutItem * itemAt(int, QFormLayout::ItemRole)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout6itemAtEiNS_8ItemRoleE(void *this_, int row, QFormLayout::ItemRole role) {
  return (void*)((QFormLayout*)this_)->itemAt(row, role);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:138
// [-2] void getItemPosition(int, int *, QFormLayout::ItemRole *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QFormLayout15getItemPositionEiPiPNS_8ItemRoleE(void *this_, int index, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getItemPosition(index, rowPtr, rolePtr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:139
// [-2] void getWidgetPosition(QWidget *, int *, QFormLayout::ItemRole *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QFormLayout17getWidgetPositionEP7QWidgetPiPNS_8ItemRoleE(void *this_, QWidget * widget, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getWidgetPosition(widget, rowPtr, rolePtr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:140
// [-2] void getLayoutPosition(QLayout *, int *, QFormLayout::ItemRole *)
extern "C" Q_DECL_EXPORT
void C_ZNK11QFormLayout17getLayoutPositionEP7QLayoutPiPNS_8ItemRoleE(void *this_, QLayout * layout, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getLayoutPosition(layout, rowPtr, rolePtr);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:141
// [8] QWidget * labelForField(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout13labelForFieldEP7QWidget(void *this_, QWidget * field) {
  return (void*)((QFormLayout*)this_)->labelForField(field);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:142
// [8] QWidget * labelForField(QLayout *)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout13labelForFieldEP7QLayout(void *this_, QLayout * field) {
  return (void*)((QFormLayout*)this_)->labelForField(field);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:145
// [-2] void addItem(QLayoutItem *)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * item) {
  ((QFormLayout*)this_)->addItem(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:146
// [8] QLayoutItem * itemAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout6itemAtEi(void *this_, int index) {
  return (void*)((QFormLayout*)this_)->itemAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:147
// [8] QLayoutItem * takeAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QFormLayout6takeAtEi(void *this_, int index) {
  return (void*)((QFormLayout*)this_)->takeAt(index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:149
// [-2] void setGeometry(const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout11setGeometryERK5QRect(void *this_, QRect* rect) {
  ((QFormLayout*)this_)->setGeometry(*rect);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:150
// [8] QSize minimumSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout11minimumSizeEv(void *this_) {
  auto rv = ((QFormLayout*)this_)->minimumSize();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:151
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QFormLayout8sizeHintEv(void *this_) {
  auto rv = ((QFormLayout*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:152
// [-2] void invalidate()
extern "C" Q_DECL_EXPORT
void C_ZN11QFormLayout10invalidateEv(void *this_) {
  ((QFormLayout*)this_)->invalidate();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:154
// [1] bool hasHeightForWidth()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QFormLayout17hasHeightForWidthEv(void *this_) {
  return (bool)((QFormLayout*)this_)->hasHeightForWidth();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:155
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout14heightForWidthEi(void *this_, int width) {
  return (int)((QFormLayout*)this_)->heightForWidth(width);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:156
// [4] Qt::Orientations expandingDirections()
extern "C" Q_DECL_EXPORT
Qt::Orientations C_ZNK11QFormLayout19expandingDirectionsEv(void *this_) {
  return (Qt::Orientations)((QFormLayout*)this_)->expandingDirections();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:157
// [4] int count()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout5countEv(void *this_) {
  return (int)((QFormLayout*)this_)->count();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qformlayout.h:159
// [4] int rowCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QFormLayout8rowCountEv(void *this_) {
  return (int)((QFormLayout*)this_)->rowCount();
}

//  main block end
