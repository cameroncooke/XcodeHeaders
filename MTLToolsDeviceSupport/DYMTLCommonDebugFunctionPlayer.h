//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MTLToolsDeviceSupport/DYMTLCommonFunctionPlayer.h>

@class CAMetalLayer, DYMTLDebugWireframeRenderer, DYMTLTextureRenderer;

@interface DYMTLCommonDebugFunctionPlayer : DYMTLCommonFunctionPlayer
{
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _drawableIdToLayerIdMap;
    struct unordered_map<unsigned long long, DrawableInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DrawableInfo>>> _textureToDrawableMap;
    struct unordered_map<unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, GPUTools::MTL::Utils::DYMTLRenderPassDescriptor>>> _commandEncoderDescriptorMap;
    struct unordered_map<unsigned long long, CommandBufferInfo, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, CommandBufferInfo>>> _commandBufferMap;
    unordered_map_ca22002e _encoderMap;
    unordered_map_ca22002e _parallelEncoderMap;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _encoderToParallelEncoderMap;
    unsigned long long _lastEncoderID;
    BOOL _disableWireframe;
    struct unordered_set<unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<unsigned long long>> _commandQueueSet;
    DYMTLDebugWireframeRenderer *_wireframeRenderer;
    DYMTLTextureRenderer *_textureRenderer;
    unsigned long long _targetCommandEncoderId;
    CAMetalLayer *_layer;
    BOOL _shouldIgnoreCaptureFile;
    unsigned int _currentEncoderIndex;
}

@property(nonatomic) unsigned int currentEncoderIndex; // @synthesize currentEncoderIndex=_currentEncoderIndex;
@property(nonatomic) BOOL shouldIgnoreCaptureFile; // @synthesize shouldIgnoreCaptureFile=_shouldIgnoreCaptureFile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_isReceiverTypeCommandEncoderRelated;
- (BOOL)_isFunctionCommandEncoderCreation;
- (void)_forceCommandEncoderAttachmentStoreActionToStore:(id)arg1;
- (void)_forceAttachmentStoreActionToStore:(id)arg1;
- (void)_trackObjects;
- (void)_addRenderPassDescriptorToEncoderMapFromArgumentPointer:(void *)arg1 forEncoder:(unsigned long long)arg2;
- (struct AttachmentInfo)_attachmentInfoForCommandEncoderID:(unsigned long long)arg1;
- (void)_executeGraphicsFunction;
- (void)presentDrawable;
- (id)_texture2DFromTexture:(id)arg1 level:(unsigned long long)arg2 slice:(unsigned long long)arg3 depthPlane:(unsigned long long)arg4 commandBuffer:(id)arg5;
- (void)waitForCommmandBuffersCompletion;
- (void)commitEncodersAndCommandBuffers;
- (void)_endEncodingForAllRemainingEncoders:(unordered_map_ca22002e *)arg1;
- (void)prepareForCaptureExecution;
- (void)executePlatformFunction;
- (void)_superExecutePlatformFunction;
- (void)executeGraphicsFunction;
- (void)executeFunctions:(struct CoreFunction *)arg1 count:(unsigned long long)arg2;
- (unordered_map_ca22002e *)encoderMap;
- (id)initWithCaptureStore:(id)arg1;
- (void)setDevice:(id)arg1;

@end

