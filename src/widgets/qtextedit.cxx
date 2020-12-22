//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(textedit)
// /usr/include/qt/QtWidgets/qtextedit.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextedit.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTextEdit is pure virtual: false false
// QTextEdit has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextEdit_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextEdit_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextEdit_t qt_meta_stringdata_MyQTextEdit = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTextEdit"
  },
  "MyQTextEdit"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextEdit[] = {
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
class Q_DECL_EXPORT MyQTextEdit : public QTextEdit {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QTextEdit::staticMetaObject,
  qt_meta_stringdata_MyQTextEdit.data,
  qt_meta_data_MyQTextEdit,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQTextEdit.stringdata0))
      return static_cast<void*>(this);
  return QTextEdit::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QTextEdit::qt_metacall(_c, _id, _a);
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
  virtual ~MyQTextEdit() {}
// void QTextEdit(QWidget *)
MyQTextEdit(QWidget * parent) : QTextEdit(parent) {}
// void QTextEdit(const QString &, QWidget *)
MyQTextEdit(const QString & text, QWidget * parent) : QTextEdit(text, parent) {}
// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool event(QEvent *)
  virtual bool event(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"event", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTextEdit::event(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::timerEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyPressEvent(QKeyEvent *)
  virtual void keyPressEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyPressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::keyPressEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void keyReleaseEvent(QKeyEvent *)
  virtual void keyReleaseEvent(QKeyEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"keyReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::keyReleaseEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::resizeEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::paintEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mousePressEvent(QMouseEvent *)
  virtual void mousePressEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mousePressEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::mousePressEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseMoveEvent(QMouseEvent *)
  virtual void mouseMoveEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::mouseMoveEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseReleaseEvent(QMouseEvent *)
  virtual void mouseReleaseEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseReleaseEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::mouseReleaseEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void mouseDoubleClickEvent(QMouseEvent *)
  virtual void mouseDoubleClickEvent(QMouseEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mouseDoubleClickEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::mouseDoubleClickEvent(e);
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool focusNextPrevChild(bool)
  virtual bool focusNextPrevChild(bool next)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusNextPrevChild", &handled, 1, (uint64_t)next, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTextEdit::focusNextPrevChild(next);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void contextMenuEvent(QContextMenuEvent *)
  virtual void contextMenuEvent(QContextMenuEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"contextMenuEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::contextMenuEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragEnterEvent(QDragEnterEvent *)
  virtual void dragEnterEvent(QDragEnterEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragEnterEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::dragEnterEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragLeaveEvent(QDragLeaveEvent *)
  virtual void dragLeaveEvent(QDragLeaveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragLeaveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::dragLeaveEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dragMoveEvent(QDragMoveEvent *)
  virtual void dragMoveEvent(QDragMoveEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dragMoveEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::dragMoveEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void dropEvent(QDropEvent *)
  virtual void dropEvent(QDropEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::dropEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusInEvent(QFocusEvent *)
  virtual void focusInEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusInEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::focusInEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void focusOutEvent(QFocusEvent *)
  virtual void focusOutEvent(QFocusEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"focusOutEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::focusOutEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void showEvent(QShowEvent *)
  virtual void showEvent(QShowEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"showEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::showEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void changeEvent(QEvent *)
  virtual void changeEvent(QEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"changeEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::changeEvent(e);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void wheelEvent(QWheelEvent *)
  virtual void wheelEvent(QWheelEvent * e)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"wheelEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::wheelEvent(e);
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QMimeData * createMimeDataFromSelection()
  virtual QMimeData * createMimeDataFromSelection() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createMimeDataFromSelection", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QMimeData *)(irv);
      // Pointer Pointer QMimeData *
    } else {
    return QTextEdit::createMimeDataFromSelection();
  }
  }

// Protected virtual Extend Visibility=Default Availability=Available
// [1] bool canInsertFromMimeData(const QMimeData *)
  virtual bool canInsertFromMimeData(const QMimeData * source) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"canInsertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTextEdit::canInsertFromMimeData(source);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void insertFromMimeData(const QMimeData *)
  virtual void insertFromMimeData(const QMimeData * source)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"insertFromMimeData", &handled, 1, (uint64_t)source, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::insertFromMimeData(source);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void inputMethodEvent(QInputMethodEvent *)
  virtual void inputMethodEvent(QInputMethodEvent * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"inputMethodEvent", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::inputMethodEvent(arg0);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Ignore Visibility=Default Availability=Available
// [-2] void doSetTextCursor(const QTextCursor &)
  virtual void doSetTextCursor(const QTextCursor & cursor)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"doSetTextCursor", &handled, 1, (uint64_t)&cursor, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTextEdit::doSetTextCursor(cursor);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QTextEdit_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQTextEdit* qo = (MyQTextEdit*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextedit(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:64
// [8] QString tr(const char *, const char *, int) 
// (12)qm2241487405 (24)_ZN9QTextEdit2trEPKcS1_i
//static
/*void qm2241487405(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTextEdit::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTextEdit::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:109
// [-2] void QTextEdit(QWidget *) 
// (11)qm985569277 (25)_ZN9QTextEditC2EP7QWidget
/*void* qm985569277(QWidget * parent)*/{
  auto _nilp = (MyQTextEdit*)(0);
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QTextEdit(parent);
  this_ =  new MyQTextEdit(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:110
// [-2] void QTextEdit(const QString &, QWidget *) 
// (11)qm351495297 (35)_ZN9QTextEditC2ERK7QStringP7QWidget
/*void* qm351495297(const QString & text, QWidget * parent)*/{
  auto _nilp = (MyQTextEdit*)(0);
  const QString & text = *(const QString *)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QTextEdit(text, parent);
  this_ =  new MyQTextEdit(text, parent);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:149
// [-2] void setDocumentTitle(const QString &) 
// (12)qm3127620905 (42)_ZN9QTextEdit16setDocumentTitleERK7QString
//static
/*void qm3127620905(const QString & title)*/ {
  const QString & title = *(const QString *)this_;
  (void) ((QTextEdit*)this_)->setDocumentTitle(title);
   auto xptr = (void (QTextEdit::*)(QString const&) ) &QTextEdit::setDocumentTitle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:151
// [8] QString documentTitle() const
// (12)qm1900886742 (31)_ZNK9QTextEdit13documentTitleEv
//static
/*void qm1900886742()*/ {
  ;
  (void) ((QTextEdit*)this_)->documentTitle();
   auto xptr = (QString (QTextEdit::*)() const ) &QTextEdit::documentTitle;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:154
// [1] bool isUndoRedoEnabled() const
// (12)qm1126972187 (35)_ZNK9QTextEdit17isUndoRedoEnabledEv
//static
/*void qm1126972187()*/ {
  ;
  (void) ((QTextEdit*)this_)->isUndoRedoEnabled();
   auto xptr = (bool (QTextEdit::*)() const ) &QTextEdit::isUndoRedoEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:156
// [-2] void setUndoRedoEnabled(bool) 
// (11)qm912521183 (35)_ZN9QTextEdit18setUndoRedoEnabledEb
//static
/*void qm912521183(bool enable)*/ {
  bool enable = *(bool*)this_;
  (void) ((QTextEdit*)this_)->setUndoRedoEnabled(enable);
   auto xptr = (void (QTextEdit::*)(bool) ) &QTextEdit::setUndoRedoEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QTextEditD2Ev(void *this_)*/ {
  delete (QTextEdit*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextedit
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(textedit)
#endif // #ifndef QT_MINIMAL
//  footer block end
