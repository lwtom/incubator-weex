/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#pragma once

#include "JSObject.h"

namespace JSC {

class AsyncFunctionPrototype : public JSNonFinalObject {
public:
    typedef JSNonFinalObject Base;

    DECLARE_INFO;

    static AsyncFunctionPrototype* create(VM& vm, Structure* structure)
    {
        AsyncFunctionPrototype* prototype = new (NotNull, allocateCell<AsyncFunctionPrototype>(vm.heap)) AsyncFunctionPrototype(vm, structure);
        prototype->finishCreation(vm);
        return prototype;
    }

    static Structure* createStructure(VM& vm, JSGlobalObject* globalObject, JSValue proto)
    {
        return Structure::create(vm, globalObject, proto, TypeInfo(ObjectType, StructureFlags), info());
    }

protected:
    void finishCreation(VM&);

private:
    AsyncFunctionPrototype(VM&, Structure*);
};

} // namespace JSC
