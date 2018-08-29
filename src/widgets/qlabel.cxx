//  header block begin
// /usr/include/qt/QtWidgets/qlabel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlabel.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QLabel is pure virtual: false
// QLabel has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQLabel_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLabel_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLabel_t qt_meta_stringdata_MyQLabel = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQLabel"
  },
  "MyQLabel"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLabel[] = {
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
class Q_DECL_EXPORT MyQLabel : public QLabel {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QLabel::staticMetaObject,
  qt_meta_stringdata_MyQLabel.data,
  qt_meta_data_MyQLabel,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQLabel.stringdata0))
      return static_cast<void*>(this);
  return QLabel::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QLabel::qt_metacall(_c, _id, _a);
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
  virtual ~MyQLabel() {}
// void QLabel(QWidget *, Qt::WindowFlags)
MyQLabel(QWidget * parent, QFlags<Qt::WindowType> f) : QLabel(parent, f) {}
// void QLabel(const QString &, QWidget *, Qt::WindowFlags)
MyQLabel(const QString & text, QWidget * parent, QFlags<Qt::WindowType> f) : QLabel(text, parent, f) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QLabel::event(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::keyPressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::paintEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::changeEvent(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::mousePressEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::mouseMoveEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::mouseReleaseEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::contextMenuEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::focusInEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * ev)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)ev, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QLabel::focusOutEvent(ev);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QLabel::focusNextPrevChild(next);
  }
  }

};
// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:137
// [1] bool event(QEvent *)
extern "C" Q_DECL_EXPORT
bool C_ZN6QLabel5eventEP6QEvent(void *this_, QEvent * e) {
  return (bool)((QLabel*)this_)->QLabel::event(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:138
// [-2] void keyPressEvent(QKeyEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel13keyPressEventEP9QKeyEvent(void *this_, QKeyEvent * ev) {
  ((QLabel*)this_)->QLabel::keyPressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:139
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel10paintEventEP11QPaintEvent(void *this_, QPaintEvent * arg0) {
  ((QLabel*)this_)->QLabel::paintEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:140
// [-2] void changeEvent(QEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel11changeEventEP6QEvent(void *this_, QEvent * arg0) {
  ((QLabel*)this_)->QLabel::changeEvent(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:141
// [-2] void mousePressEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel15mousePressEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QLabel*)this_)->QLabel::mousePressEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:142
// [-2] void mouseMoveEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel14mouseMoveEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QLabel*)this_)->QLabel::mouseMoveEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:143
// [-2] void mouseReleaseEvent(QMouseEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel17mouseReleaseEventEP11QMouseEvent(void *this_, QMouseEvent * ev) {
  ((QLabel*)this_)->QLabel::mouseReleaseEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:145
// [-2] void contextMenuEvent(QContextMenuEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel16contextMenuEventEP17QContextMenuEvent(void *this_, QContextMenuEvent * ev) {
  ((QLabel*)this_)->QLabel::contextMenuEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:147
// [-2] void focusInEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel12focusInEventEP11QFocusEvent(void *this_, QFocusEvent * ev) {
  ((QLabel*)this_)->QLabel::focusInEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:148
// [-2] void focusOutEvent(QFocusEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel13focusOutEventEP11QFocusEvent(void *this_, QFocusEvent * ev) {
  ((QLabel*)this_)->QLabel::focusOutEvent(ev);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:149
// [1] bool focusNextPrevChild(bool)
extern "C" Q_DECL_EXPORT
bool C_ZN6QLabel18focusNextPrevChildEb(void *this_, bool next) {
  return (bool)((QLabel*)this_)->QLabel::focusNextPrevChild(next);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel10metaObjectEv(void *this_) {
  return (void*)((QLabel*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLabel11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QLabel*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN6QLabel11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QLabel*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLabel2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLabel::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLabel6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QLabel::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:70
// [-2] void QLabel(QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLabelC2EP7QWidget6QFlagsIN2Qt10WindowTypeEE(QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQLabel*)(0);
  return  new MyQLabel(parent, f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:71
// [-2] void QLabel(const QString &, QWidget *, Qt::WindowFlags)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLabelC2ERK7QStringP7QWidget6QFlagsIN2Qt10WindowTypeEE(QString* text, QWidget * parent, QFlags<Qt::WindowType> f) {
  auto _nilp = (MyQLabel*)(0);
  return  new MyQLabel(*text, parent, f);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:72
// [-2] void ~QLabel()
extern "C" Q_DECL_EXPORT
void C_ZN6QLabelD2Ev(void *this_) {
  delete (QLabel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:74
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel4textEv(void *this_) {
  auto rv = ((QLabel*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:75
// [8] const QPixmap * pixmap()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel6pixmapEv(void *this_) {
  return (void*)((QLabel*)this_)->pixmap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:77
// [8] const QPicture * picture()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel7pictureEv(void *this_) {
  return (void*)((QLabel*)this_)->picture();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:80
// [8] QMovie * movie()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel5movieEv(void *this_) {
  return (void*)((QLabel*)this_)->movie();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:83
// [4] Qt::TextFormat textFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK6QLabel10textFormatEv(void *this_) {
  return (Qt::TextFormat)((QLabel*)this_)->textFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:84
// [-2] void setTextFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat arg0) {
  ((QLabel*)this_)->setTextFormat(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:86
// [4] Qt::Alignment alignment()
extern "C" Q_DECL_EXPORT
Qt::Alignment C_ZNK6QLabel9alignmentEv(void *this_) {
  return (Qt::Alignment)((QLabel*)this_)->alignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:87
// [-2] void setAlignment(Qt::Alignment)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel12setAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> arg0) {
  ((QLabel*)this_)->setAlignment(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:89
// [-2] void setWordWrap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel11setWordWrapEb(void *this_, bool on) {
  ((QLabel*)this_)->setWordWrap(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:90
// [1] bool wordWrap()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLabel8wordWrapEv(void *this_) {
  return (bool)((QLabel*)this_)->wordWrap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:92
// [4] int indent()
extern "C" Q_DECL_EXPORT
int C_ZNK6QLabel6indentEv(void *this_) {
  return (int)((QLabel*)this_)->indent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:93
// [-2] void setIndent(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel9setIndentEi(void *this_, int arg0) {
  ((QLabel*)this_)->setIndent(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:95
// [4] int margin()
extern "C" Q_DECL_EXPORT
int C_ZNK6QLabel6marginEv(void *this_) {
  return (int)((QLabel*)this_)->margin();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:96
// [-2] void setMargin(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel9setMarginEi(void *this_, int arg0) {
  ((QLabel*)this_)->setMargin(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:98
// [1] bool hasScaledContents()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLabel17hasScaledContentsEv(void *this_) {
  return (bool)((QLabel*)this_)->hasScaledContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:99
// [-2] void setScaledContents(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel17setScaledContentsEb(void *this_, bool arg0) {
  ((QLabel*)this_)->setScaledContents(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:100
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel8sizeHintEv(void *this_) {
  auto rv = ((QLabel*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:101
// [8] QSize minimumSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel15minimumSizeHintEv(void *this_) {
  auto rv = ((QLabel*)this_)->minimumSizeHint();
return new QSize(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:103
// [-2] void setBuddy(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel8setBuddyEP7QWidget(void *this_, QWidget * arg0) {
  ((QLabel*)this_)->setBuddy(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:104
// [8] QWidget * buddy()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel5buddyEv(void *this_) {
  return (void*)((QLabel*)this_)->buddy();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:106
// [4] int heightForWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK6QLabel14heightForWidthEi(void *this_, int arg0) {
  return (int)((QLabel*)this_)->heightForWidth(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:108
// [1] bool openExternalLinks()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLabel17openExternalLinksEv(void *this_) {
  return (bool)((QLabel*)this_)->openExternalLinks();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:109
// [-2] void setOpenExternalLinks(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel20setOpenExternalLinksEb(void *this_, bool open) {
  ((QLabel*)this_)->setOpenExternalLinks(open);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:111
// [-2] void setTextInteractionFlags(Qt::TextInteractionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel23setTextInteractionFlagsE6QFlagsIN2Qt19TextInteractionFlagEE(void *this_, QFlags<Qt::TextInteractionFlag> flags) {
  ((QLabel*)this_)->setTextInteractionFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:112
// [4] Qt::TextInteractionFlags textInteractionFlags()
extern "C" Q_DECL_EXPORT
Qt::TextInteractionFlags C_ZNK6QLabel20textInteractionFlagsEv(void *this_) {
  return (Qt::TextInteractionFlags)((QLabel*)this_)->textInteractionFlags();
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qlabel.h:114
// [-2] void setSelection(int, int)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel12setSelectionEii(void *this_, int arg0, int arg1) {
  ((QLabel*)this_)->setSelection(arg0, arg1);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:115
// [1] bool hasSelectedText()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLabel15hasSelectedTextEv(void *this_) {
  return (bool)((QLabel*)this_)->hasSelectedText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:116
// [8] QString selectedText()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLabel12selectedTextEv(void *this_) {
  auto rv = ((QLabel*)this_)->selectedText();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qlabel.h:117
// [4] int selectionStart()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
int C_ZNK6QLabel14selectionStartEv(void *this_) {
  return (int)((QLabel*)this_)->selectionStart();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:120
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel7setTextERK7QString(void *this_, QString* arg0) {
  ((QLabel*)this_)->setText(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:121
// [-2] void setPixmap(const QPixmap &)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel9setPixmapERK7QPixmap(void *this_, QPixmap* arg0) {
  ((QLabel*)this_)->setPixmap(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:123
// [-2] void setPicture(const QPicture &)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel10setPictureERK8QPicture(void *this_, QPicture* arg0) {
  ((QLabel*)this_)->setPicture(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:126
// [-2] void setMovie(QMovie *)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel8setMovieEP6QMovie(void *this_, QMovie * movie) {
  ((QLabel*)this_)->setMovie(movie);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:128
// [-2] void setNum(int)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel6setNumEi(void *this_, int arg0) {
  ((QLabel*)this_)->setNum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:129
// [-2] void setNum(double)
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel6setNumEd(void *this_, double arg0) {
  ((QLabel*)this_)->setNum(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qlabel.h:130
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel5clearEv(void *this_) {
  ((QLabel*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlabel.h:133
// [-2] void linkActivated(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel13linkActivatedERK7QString(void *this_, QString* link) {
  ((QLabel*)this_)->linkActivated(*link);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qlabel.h:134
// [-2] void linkHovered(const QString &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN6QLabel11linkHoveredERK7QString(void *this_, QString* link) {
  ((QLabel*)this_)->linkHovered(*link);
}
#endif // QT_VERSION >= 0x040200

//  main block end
