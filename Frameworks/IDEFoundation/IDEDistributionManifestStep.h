//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@class IDEDistributionManifest;

@interface IDEDistributionManifestStep : IDEDistributionStep
{
}

+ (id)keyPathsForValuesDistributionManifest;
+ (id)availableOptionsForPropertyList;
@property(retain) IDEDistributionManifest *distributionManifest;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)wantsAssetPackManifestURL;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1;

@end

