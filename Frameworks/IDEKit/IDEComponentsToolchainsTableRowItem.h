//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTKVOQueueForwarder, DVTToolchain, DVTToolchainRegistry, IDEComponentsToolchainsTableController, NSNumber, NSString;

@interface IDEComponentsToolchainsTableRowItem : NSObject
{
    DVTToolchain *_toolchain;
    DVTToolchainRegistry *_toolchainRegistry;
    NSString *_origin;
    NSString *_displaySize;
    IDEComponentsToolchainsTableController *_controller;
    DVTKVOQueueForwarder *_registryActiveToolchain;
    DVTKVOQueueForwarder *_registryIntendedToolchain;
}

+ (id)keyPathsForValuesAffectingIsActive;
@property(readonly) DVTKVOQueueForwarder *registryIntendedToolchain; // @synthesize registryIntendedToolchain=_registryIntendedToolchain;
@property(readonly) DVTKVOQueueForwarder *registryActiveToolchain; // @synthesize registryActiveToolchain=_registryActiveToolchain;
@property(readonly) DVTToolchain *toolchain; // @synthesize toolchain=_toolchain;
- (void).cxx_destruct;
- (id)textColor;
- (id)contextImage;
@property(readonly) NSString *displaySize;
@property(readonly) NSString *origin;
- (void)setIsActive:(id)arg1;
@property(readonly) NSNumber *isActive;
- (long long)compare:(id)arg1;
- (id)initWithToolchain:(id)arg1 toolchainRegistry:(id)arg2 controller:(id)arg3;

@end
