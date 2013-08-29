//
//  terminator_classifier_pa.h
//  terminator
//
//  Created by freiz on 13-8-28.
//  Copyright (c) 2013年 freiz. All rights reserved.
//

#ifndef terminator_terminator_classifier_pa_h
#define terminator_terminator_classifier_pa_h

#include "terminator_classifier_base.h"

class TerminatorClassifierPA: public TerminatorClassifierBase
{
private:
  
  static const double DEFAULT_PA_SHIFT;
  
  double pa_shift_;
  
public:
  
  TerminatorClassifierPA();
  virtual double Predict(std::map<std::string, node>& weights);
  virtual void Train(std::map<std::string, node>& weights, bool is_spam);
};

#endif
