//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUTraceModelFactory.h"

#import "DYPMTLResourceItemFactory.h"

@class GPUMTLTraceOutline, NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface GPUMTLModelFactory : GPUTraceModelFactory <DYPMTLResourceItemFactory>
{
    NSMapTable *_resourceTypeToViewMaptable;
    GPUMTLTraceOutline *_outline;
}

+ (id)_keyForResourceItem:(id)arg1;
+ (Class)renderJobClass;
+ (Class)imageResourceSettingBubbleClass;
+ (Class)textureInfoBubbleClass;
+ (Class)depthStencilInfoBubbleClass;
+ (Class)colorInfoBubbleClass;
+ (Class)captureSessionInfoClassWithAPI:(unsigned int)arg1;
@property(retain, nonatomic) GPUMTLTraceOutline *outline; // @synthesize outline=_outline;
- (void).cxx_destruct;
- (id)functionWithPipeline:(id)arg1 shaderType:(unsigned int)arg2 functionInfo:(id)arg3 label:(id)arg4;
- (id)pipelineStateWithProgramGroup:(id)arg1 programType:(unsigned int)arg2 pipelineStateID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 label:(id)arg6;
- (id)functionInfoWithSourceURL:(id)arg1 lineNumber:(long long)arg2 onlineCompiled:(BOOL)arg3;
- (id)rawBytesItemWithGroup:(id)arg1 bytesType:(unsigned long long)arg2 bindingIndex:(unsigned int)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 label:(id)arg6;
- (id)shaderItemWithProgram:(id)arg1 shaderType:(unsigned int)arg2 functionInfo:(id)arg3 label:(id)arg4;
- (id)programItemWithGroup:(id)arg1 programType:(unsigned int)arg2 programID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 label:(id)arg6;
- (id)resourceItemWithGroup:(id)arg1 type:(unsigned int)arg2 objectID:(unsigned long long)arg3 stateMirrorObject:(const void *)arg4 containerID:(unsigned long long)arg5 label:(id)arg6;
- (id)createInfoBubbleForImageResource:(id)arg1 parentView:(id)arg2 owner:(id)arg3 renderingAttributes:(id)arg4;
- (id)resourceItemOfType:(unsigned int)arg1 resourceID:(unsigned int)arg2 forFunctionIndex:(unsigned int)arg3;
- (id)storedRenderingAttributesForResourceItem:(id)arg1;
- (id)resolveCurrentResourceItemWithPreviousItem:(id)arg1 currentMainEditorItem:(id)arg2 topLevelObjects:(id)arg3;
- (void)establishChildrenForProgramItem:(id)arg1;
- (id)programObjectFromProgramItem:(id)arg1 shaderType:(unsigned int)arg2;
- (void)generateResourcesForGroup:(id)arg1 apiItem:(id)arg2 boundOnly:(BOOL)arg3;
- (void)createParentResourceGroupsForAPIItem:(id)arg1;
- (id)_createResourceGroup:(id)arg1 parentItem:(id)arg2 boundOnly:(BOOL)arg3;
- (void)primitiveInvalidate;
- (id)apiItemFromDisplayIndex:(unsigned int)arg1;
- (id)locateDisplayableItemToDraw:(id)arg1 isAssociatedWithStateItem:(char *)arg2;
- (id)apiItemForTrueFunctionIndex:(unsigned int)arg1;
- (id)apiItemFromFunctionIndex:(unsigned int)arg1;
- (void)invalidateModel;
- (void)generateModelWithTraceSession:(id)arg1;
- (id)resourceTypeToViewClassMaptable;
- (id)frames;
- (id)domainProviderRootProgramGroup;
- (id)domainProviderRootResourceGroup;
- (id)allMarkerItems;
- (id)allAPIItems;
- (id)allDisplayableItems;
- (id)lastDisplayableItem;
- (id)allPrograms;
- (id)allTraceItems;
- (id)rootProcessItem;
- (id)initWithController:(id)arg1 variablesViewContentProviderClass:(Class)arg2 pluginFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
