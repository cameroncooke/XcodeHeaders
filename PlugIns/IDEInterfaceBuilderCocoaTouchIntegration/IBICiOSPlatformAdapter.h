//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBAbstractCocoaTouchPlatformAdapter.h>

@interface IBICiOSPlatformAdapter : IBAbstractCocoaTouchPlatformAdapter
{
}

- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (id)defaultTargetDevices;
- (id)firstVersionSupportingThinning;
- (struct CGSize)infoPlistPointSizeForLaunchScreenSlot:(id)arg1;
- (id)platformForDeviceThinningDatabase;
- (id)simulatorPlatformIdentifier;
- (BOOL)usesPNGCrush;

@end
