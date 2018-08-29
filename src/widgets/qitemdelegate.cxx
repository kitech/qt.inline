//  header block begin
// /usr/include/qt/QtWidgets/qitemdelegate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qitemdelegate.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QItemDelegate is pure virtual: false
// QItemDelegate has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQItemDelegate_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQItemDelegate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQItemDelegate_t qt_meta_stringdata_MyQItemDelegate = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQItemDelegate"
  },
  "MyQItemDelegate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQItemDelegate[] = {
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
class Q_DECL_EXPORT MyQItemDelegate : public QItemDelegate {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QItemDelegate::staticMetaObject,
  qt_meta_stringdata_MyQItemDelegate.data,
  qt_meta_data_MyQItemDelegate,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQItemDelegate.stringdata0))
      return static_cast<void*>(this);
  return QItemDelegate::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QItemDelegate::qt_metacall(_c, _id, _a);
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
  virtual ~MyQItemDelegate() {}
// void QItemDelegate(QObject *)
MyQItemDelegate(QObject * parent) : QItemDelegate(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void drawDisplay(QPainter *, const QStyleOptionViewItem &, const QRect &, const QString &)
  virtual void drawDisplay(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QString & text) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawDisplay", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&text, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawDisplay(painter, option, rect, text);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawDecoration(QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap &)
  virtual void drawDecoration(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, const QPixmap & pixmap) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawDecoration", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)&pixmap, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawDecoration(painter, option, rect, pixmap);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawFocus(QPainter *, const QStyleOptionViewItem &, const QRect &)
  virtual void drawFocus(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawFocus", &handled, 3, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawFocus(painter, option, rect);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void drawCheck(QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState)
  virtual void drawCheck(QPainter * painter, const QStyleOptionViewItem & option, const QRect & rect, Qt::CheckState state) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"drawCheck", &handled, 4, (uint64_t)painter, (uint64_t)&option, (uint64_t)&rect, (uint64_t)state, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QItemDelegate::drawCheck(painter, option, rect, state);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool eventFilter(QObject *, QEvent *)
  virtual bool eventFilter(QObject * object, QEvent * event)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"eventFilter", &handled, 2, (uint64_t)object, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QItemDelegate::eventFilter(object, event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
  virtual bool editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"editorEvent", &handled, 4, (uint64_t)event, (uint64_t)model, (uint64_t)&option, (uint64_t)&index, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QItemDelegate::editorEvent(event, model, option, index);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:92
// [-2] void drawDisplay(QPainter *, const QStyleOptionViewItem &, const QRect &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate11drawDisplayEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QString(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, QString* text) {
  ((QItemDelegate*)this_)->QItemDelegate::drawDisplay(painter, *option, *rect, *text);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:94
// [-2] void drawDecoration(QPainter *, const QStyleOptionViewItem &, const QRect &, const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate14drawDecorationEP8QPainterRK20QStyleOptionViewItemRK5QRectRK7QPixmap(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, QPixmap* pixmap) {
  ((QItemDelegate*)this_)->QItemDelegate::drawDecoration(painter, *option, *rect, *pixmap);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:96
// [-2] void drawFocus(QPainter *, const QStyleOptionViewItem &, const QRect &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate9drawFocusEP8QPainterRK20QStyleOptionViewItemRK5QRect(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect) {
  ((QItemDelegate*)this_)->QItemDelegate::drawFocus(painter, *option, *rect);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:98
// [-2] void drawCheck(QPainter *, const QStyleOptionViewItem &, const QRect &, Qt::CheckState)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate9drawCheckEP8QPainterRK20QStyleOptionViewItemRK5QRectN2Qt10CheckStateE(void *this_, QPainter * painter, QStyleOptionViewItem* option, QRect* rect, Qt::CheckState state) {
  ((QItemDelegate*)this_)->QItemDelegate::drawCheck(painter, *option, *rect, state);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:108
// [1] bool eventFilter(QObject *, QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN13QItemDelegate11eventFilterEP7QObjectP6QEvent(void *this_, QObject * object, QEvent * event) {
  return (bool)((QItemDelegate*)this_)->QItemDelegate::eventFilter(object, event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:109
// [1] bool editorEvent(QEvent *, QAbstractItemModel *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN13QItemDelegate11editorEventEP6QEventP18QAbstractItemModelRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QEvent * event, QAbstractItemModel * model, QStyleOptionViewItem* option, QModelIndex* index) {
  return (bool)((QItemDelegate*)this_)->QItemDelegate::editorEvent(event, model, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate10metaObjectEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QItemDelegate11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QItemDelegate*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QItemDelegate11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QItemDelegate*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QItemDelegate2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemDelegate::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:58
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QItemDelegate6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QItemDelegate::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:62
// [-2] void QItemDelegate(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QItemDelegateC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQItemDelegate*)(0);
  return  new MyQItemDelegate(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:63
// [-2] void ~QItemDelegate()
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegateD2Ev(void *this_) {
  delete (QItemDelegate*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:65
// [1] bool hasClipping()
extern "C" Q_DECL_EXPORT
bool C_ZNK13QItemDelegate11hasClippingEv(void *this_) {
  return (bool)((QItemDelegate*)this_)->hasClipping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:66
// [-2] void setClipping(bool)
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegate11setClippingEb(void *this_, bool clip) {
  ((QItemDelegate*)this_)->setClipping(clip);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:69
// [-2] void paint(QPainter *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate5paintEP8QPainterRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QPainter * painter, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->paint(painter, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:72
// [8] QSize sizeHint(const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate8sizeHintERK20QStyleOptionViewItemRK11QModelIndex(void *this_, QStyleOptionViewItem* option, QModelIndex* index) {
  auto rv = ((QItemDelegate*)this_)->sizeHint(*option, *index);
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:76
// [8] QWidget * createEditor(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate12createEditorEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * parent, QStyleOptionViewItem* option, QModelIndex* index) {
  return (void*)((QItemDelegate*)this_)->createEditor(parent, *option, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:80
// [-2] void setEditorData(QWidget *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate13setEditorDataEP7QWidgetRK11QModelIndex(void *this_, QWidget * editor, QModelIndex* index) {
  ((QItemDelegate*)this_)->setEditorData(editor, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:81
// [-2] void setModelData(QWidget *, QAbstractItemModel *, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate12setModelDataEP7QWidgetP18QAbstractItemModelRK11QModelIndex(void *this_, QWidget * editor, QAbstractItemModel * model, QModelIndex* index) {
  ((QItemDelegate*)this_)->setModelData(editor, model, *index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:83
// [-2] void updateEditorGeometry(QWidget *, const QStyleOptionViewItem &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZNK13QItemDelegate20updateEditorGeometryEP7QWidgetRK20QStyleOptionViewItemRK11QModelIndex(void *this_, QWidget * editor, QStyleOptionViewItem* option, QModelIndex* index) {
  ((QItemDelegate*)this_)->updateEditorGeometry(editor, *option, *index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:88
// [8] QItemEditorFactory * itemEditorFactory()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QItemDelegate17itemEditorFactoryEv(void *this_) {
  return (void*)((QItemDelegate*)this_)->itemEditorFactory();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qitemdelegate.h:89
// [-2] void setItemEditorFactory(QItemEditorFactory *)
extern "C" Q_DECL_EXPORT
void C_ZN13QItemDelegate20setItemEditorFactoryEP18QItemEditorFactory(void *this_, QItemEditorFactory * factory) {
  ((QItemDelegate*)this_)->setItemEditorFactory(factory);
}

//  main block end
