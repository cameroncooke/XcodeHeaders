//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlottedAssetRep.h>

@class NSString;

@interface IBICDataSetRep : IBICSlottedAssetRep
{
    NSString *_universalTypeIdentifier;
}

+ (id)contentReferenceTypeName;
+ (Class)repIdentifierClass;
+ (Class)slottedAssetClass;
+ (id)validSourceFileNameExtensions;
+ (id)assetRepWithSlot:(id)arg1 fileName:(id)arg2 explicitlyUnassigned:(BOOL)arg3;
+ (id)assetRepWithRepIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *universalTypeIdentifier; // @synthesize universalTypeIdentifier=_universalTypeIdentifier;
- (void).cxx_destruct;
- (id)fullyQualifiedRelativePathForFileWriter;
- (BOOL)requiresKnownFileTypeToBeMinimallyFitForCompiling;
- (id)displayName;
- (CDStruct_550fdc95)taggingSupport;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (id)parent;
- (id)initWithSlot:(id)arg1;
- (BOOL)populateNamedAssetImportInfo:(id)arg1 allCompiledItems:(id)arg2 error:(id *)arg3;

@end

