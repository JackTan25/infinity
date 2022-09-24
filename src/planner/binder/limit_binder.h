//
// Created by JinHai on 2022/8/13.
//

#pragma once

#include "planner/expression_binder.h"

namespace infinity {

class LimitBinder : public ExpressionBinder {
public:
    // Bind expression entry
    std::shared_ptr<BaseExpression>
    BuildExpression(const hsql::Expr &expr, const std::shared_ptr<BindContext>& bind_context_ptr) override;

    std::shared_ptr<BaseExpression>
    BuildFuncExpr(const hsql::Expr &expr, const std::shared_ptr<BindContext>& bind_context_ptr) override;
private:
};

}
