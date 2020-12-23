//  header block begin

#ifndef QT_MINIMAL
#include <QtWidgets/qtwidgetsglobal.h>
#if QT_CONFIG(undoview)
// /usr/include/qt/QtWidgets/qundoview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qundoview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QUndoView is pure virtual: false false
// QUndoView has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qundoview(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:59
// [8] QString tr(const char *, const char *, int) 
// (12)qm2665192306 (24)_ZN9QUndoView2trEPKcS1_i
//static
/*void qm2665192306(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QUndoView::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QUndoView::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:65
// [-2] void QUndoView(QWidget *) 
// (12)qm3245447777 (25)_ZN9QUndoViewC2EP7QWidget
/*void* qm3245447777(QWidget * parent)*/{
  QWidget * parent = *(QWidget **)this_;
  this_ =  new QUndoView(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:66
// [-2] void QUndoView(QUndoStack *, QWidget *) 
// (11)qm168829214 (38)_ZN9QUndoViewC2EP10QUndoStackP7QWidget
/*void* qm168829214(QUndoStack * stack, QWidget * parent)*/{
  QUndoStack * stack = *(QUndoStack **)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QUndoView(stack, parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qundoview.h:68
// [-2] void QUndoView(QUndoGroup *, QWidget *) 
// (12)qm2782390845 (38)_ZN9QUndoViewC2EP10QUndoGroupP7QWidget
/*void* qm2782390845(QUndoGroup * group, QWidget * parent)*/{
  QUndoGroup * group = *(QUndoGroup **)this_; QWidget * parent = *(QWidget **)this_;
  this_ =  new QUndoView(group, parent);
}


/*void C_ZN9QUndoViewD2Ev(void *this_)*/ {
  delete (QUndoView*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qundoview
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(undoview)
#endif // #ifndef QT_MINIMAL
//  footer block end
