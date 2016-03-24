//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MTLToolsDeviceSupport/DYMTLFunctionPlayer.h>

@interface DYMTLCommonFunctionPlayer : DYMTLFunctionPlayer
{
    struct unordered_map<unsigned long long, id<CAMetalDrawable>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id<CAMetalDrawable>>>> _drawableMap;
    id <DYLayerManager> _layerManager;
}

@property(nonatomic) __weak id <DYLayerManager> layerManager; // @synthesize layerManager=_layerManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isFrameBoundary;
- (void)executePlatformFunction;
- (id)layerForID:(unsigned long long)arg1;
@property(retain, nonatomic) id <DYLayerManager> strongLayerManager; // @dynamic strongLayerManager;

@end

