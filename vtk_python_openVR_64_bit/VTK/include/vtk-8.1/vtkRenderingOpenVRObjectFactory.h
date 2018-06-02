/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkRenderingOpenVRObjectFactory.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#ifndef vtkRenderingOpenVRObjectFactory_h
#define vtkRenderingOpenVRObjectFactory_h

#include "vtkRenderingOpenVRModule.h" // For export macro
#include "vtkObjectFactory.h"

class VTKRENDERINGOPENVR_EXPORT vtkRenderingOpenVRObjectFactory : public vtkObjectFactory
{
public:
  static vtkRenderingOpenVRObjectFactory * New();
  vtkTypeMacro(vtkRenderingOpenVRObjectFactory, vtkObjectFactory)

  const char * GetDescription() override { return "vtkRenderingOpenVR factory overrides."; }

  const char * GetVTKSourceVersion() override;

  void PrintSelf(ostream &os, vtkIndent indent) override;

protected:
  vtkRenderingOpenVRObjectFactory();

private:
  vtkRenderingOpenVRObjectFactory(const vtkRenderingOpenVRObjectFactory&) = delete;
  void operator=(const vtkRenderingOpenVRObjectFactory&) = delete;
};

#endif // vtkRenderingOpenVRObjectFactory_h
