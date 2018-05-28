#pragma once

#include <windows.h>

//
// Must define NTSTATUS due to d3dkmddi.h which is included by d3d10umddi.h
//

typedef _Return_type_success_(return >= 0) LONG NTSTATUS;

#include <d3d12.h>
#include <d3d12umddi.h>
#include <new>
#include <assert.h>

#include <list>

void StopInFunction(const char * function, const char * file, int line);

#define STOP_IN_FUNCTION() StopInFunction(__FUNCTION__, __FILE__, __LINE__);

#define ASSERT(cond) if (!(cond)) STOP_IN_FUNCTION()

#include "CosUmd12Device.h"
#include "CosUmd12RootSignature.h"
#include "CosUmd12Shader.h"
#include "CosUmd12BlendState.h"
#include "CosUmd12DepthStencilState.h"
#include "CosUmd12RasterizerState.h"
#include "CosUmd12PipelineState.h"
#include "CosUmd12Descriptor.h"
#include "CosUmd12CommandQueue.h"
#include "CosUmd12CommandAllocator.h"
#include "CosUmd12CommandList.h"
#include "CosUmd12Fence.h"

