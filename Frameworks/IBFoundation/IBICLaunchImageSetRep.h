//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAbstractImageRep.h>

@interface IBICLaunchImageSetRep : IBICSlottedAbstractImageRep
{
}

+ (id)contentReferenceTypeName;
+ (Class)slottedAssetClass;
+ (Class)repIdentifierClass;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
- (BOOL)isMinimallyFitForCompiling;
- (BOOL)isImageDataSizedProperly;
- (id)baseFileNameForVersionedInfoPlistEntry;
- (void)setSlot:(id)arg1;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 error:(id *)arg3;

@end

