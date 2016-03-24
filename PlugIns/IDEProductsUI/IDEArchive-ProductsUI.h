//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEArchive.h"

#import "IDEProductsInspectable.h"

@class NSString;

@interface IDEArchive (ProductsUI) <IDEProductsInspectable>
+ (id)keyPathsForValuesAffectingArchiveDetails;
+ (id)grayAttributedString:(id)arg1;
- (id)archiveDetails;
@property(readonly) NSString *inspectableUtilityExtensionIdentifier;
- (id)inspectableIcon;
- (id)inspectableType;
- (id)inspectableSubtitle;
- (id)productsUI_toolchainDisplayName;
- (BOOL)wantsToolChainDisplayed;
- (id)productsUI_creationDate;
- (id)productsUI_archiveImage;
- (id)productsUI_version;
- (id)productsUI_userRepresentationOfVersion;
- (id)productsUI_onDiskSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

