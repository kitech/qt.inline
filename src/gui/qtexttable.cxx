//  header block begin

// /usr/include/qt/QtGui/qtexttable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtexttable.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextTable is pure virtual: false
// QTextTable has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextTable_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextTable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextTable_t qt_meta_stringdata_MyQTextTable = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTextTable"
  },
  "MyQTextTable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextTable[] = {
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
class Q_DECL_EXPORT MyQTextTable : public QTextTable {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextTable::staticMetaObject,
  qt_meta_stringdata_MyQTextTable.data,
  qt_meta_data_MyQTextTable,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextTable.stringdata0))
      return static_cast<void*>(this);
  return QTextTable::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextTable::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextTable() {}
// void QTextTable(QTextDocument *)
MyQTextTable(QTextDocument * doc) : QTextTable(doc) {}
};

extern "C" Q_DECL_EXPORT
void* C_QTextTable_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextTable* qo = (MyQTextTable*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable10metaObjectEv(void *this_) {
  return (void*)((QTextTable*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextTable11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTextTable*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTextTable11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTextTable*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextTable2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextTable::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:100
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextTable6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTextTable::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:102
// [-2] void QTextTable(QTextDocument *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextTableC2EP13QTextDocument(QTextDocument * doc) {
  return  new MyQTextTable(doc);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:103
// [-2] void ~QTextTable()
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTableD2Ev(void *this_) {
  delete (QTextTable*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:105
// [-2] void resize(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable6resizeEii(void *this_, int rows, int cols) {
  ((QTextTable*)this_)->resize(rows, cols);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:106
// [-2] void insertRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10insertRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertRows(pos, num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:107
// [-2] void insertColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13insertColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->insertColumns(pos, num);
}

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtexttable.h:108
// [-2] void appendRows(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10appendRowsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendRows(count);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// since 4.5
// /usr/include/qt/QtGui/qtexttable.h:109
// [-2] void appendColumns(int)
#if QT_VERSION >= 0x040500
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13appendColumnsEi(void *this_, int count) {
  ((QTextTable*)this_)->appendColumns(count);
}
#endif // QT_VERSION >= 0x040500

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:110
// [-2] void removeRows(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10removeRowsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeRows(pos, num);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:111
// [-2] void removeColumns(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable13removeColumnsEii(void *this_, int pos, int num) {
  ((QTextTable*)this_)->removeColumns(pos, num);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:113
// [-2] void mergeCells(int, int, int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10mergeCellsEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->mergeCells(row, col, numRows, numCols);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:114
// [-2] void mergeCells(const QTextCursor &)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable10mergeCellsERK11QTextCursor(void *this_, QTextCursor* cursor) {
  ((QTextTable*)this_)->mergeCells(*cursor);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtGui/qtexttable.h:115
// [-2] void splitCell(int, int, int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable9splitCellEiiii(void *this_, int row, int col, int numRows, int numCols) {
  ((QTextTable*)this_)->splitCell(row, col, numRows, numCols);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:117
// [4] int rows()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextTable4rowsEv(void *this_) {
  return (int)((QTextTable*)this_)->rows();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:118
// [4] int columns()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextTable7columnsEv(void *this_) {
  return (int)((QTextTable*)this_)->columns();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:120
// [16] QTextTableCell cellAt(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtEii(void *this_, int row, int col) {
  auto rv = ((QTextTable*)this_)->cellAt(row, col);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:121
// [16] QTextTableCell cellAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtEi(void *this_, int position) {
  auto rv = ((QTextTable*)this_)->cellAt(position);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:122
// [16] QTextTableCell cellAt(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6cellAtERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->cellAt(*c);
return new QTextTableCell(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:124
// [8] QTextCursor rowStart(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable8rowStartERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->rowStart(*c);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:125
// [8] QTextCursor rowEnd(const QTextCursor &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6rowEndERK11QTextCursor(void *this_, QTextCursor* c) {
  auto rv = ((QTextTable*)this_)->rowEnd(*c);
return new QTextCursor(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:127
// [-2] void setFormat(const QTextTableFormat &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextTable9setFormatERK16QTextTableFormat(void *this_, QTextTableFormat* format) {
  ((QTextTable*)this_)->setFormat(*format);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtexttable.h:128
// [16] QTextTableFormat format()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextTable6formatEv(void *this_) {
  auto rv = ((QTextTable*)this_)->format();
return new QTextTableFormat(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
