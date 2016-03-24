//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTFilePath, IDEFileReference, NSImage, NSString;

@interface IDEUnitTestsModernizationReviewChangesFile : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    DVTFilePath *_filePath;
    NSString *_name;
    NSImage *_image;
    DVTDocumentLocation *_contentDocumentLocation;
    DVTFileDataType *_documentType;
}

+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property(readonly, copy) DVTFileDataType *documentType; // @synthesize documentType=_documentType;
@property(readonly, copy) DVTDocumentLocation *contentDocumentLocation; // @synthesize contentDocumentLocation=_contentDocumentLocation;
@property(readonly, copy) NSImage *image; // @synthesize image=_image;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

