/*!
 *  Copyright (c) 2018 by Contributors
 *  Optional module when build opencl is switched to off
 */
#include "../codegen_source_base.h"
#include "../../runtime/opencl/opencl_module.h"

namespace tvm {
namespace runtime {

Module OpenCLModuleCreate(
    std::string data,
    std::string fmt,
    std::unordered_map<std::string, FunctionInfo> fmap) {
  LOG(WARNING) << "OpenCL runtime not enabled, return a source module...";
  return codegen::DeviceSourceModuleCreate(data, fmt, fmap, "opencl");
}

}  // namespace runtime
}  // namespace tvm
