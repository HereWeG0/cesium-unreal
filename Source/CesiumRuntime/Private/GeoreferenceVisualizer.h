#pragma once
#include "ComponentVisualizer.h"

class FGeoreferenceVisualizer : public FComponentVisualizer
{
private:
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
};