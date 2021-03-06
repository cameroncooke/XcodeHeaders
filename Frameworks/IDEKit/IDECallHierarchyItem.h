//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDEIndexSymbol, IDEWorkspace, NSArray, NSImage, NSString;

@interface IDECallHierarchyItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _computedChildren;
    BOOL _recursive;
    NSArray *_children;
    IDEIndexSymbol *_symbol;
    DVTDocumentLocation *_location;
    IDEWorkspace *_workspace;
}

+ (id)keyPathsForValuesAffectingNavigableItem_isLeaf;
+ (id)resursiveFunctionImage;
+ (id)resursiveMethodImage;
+ (void)initialize;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL recursive; // @synthesize recursive=_recursive;
@property(retain, nonatomic) DVTDocumentLocation *location; // @synthesize location=_location;
@property(retain) IDEIndexSymbol *symbol; // @synthesize symbol=_symbol;
@property BOOL computedChildren; // @synthesize computedChildren=_computedChildren;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
- (void).cxx_destruct;
- (id)callerResultsForForSymbol:(id)arg1 inIndex:(id)arg2;
- (void)loadChildrenOnBackgroundQueue:(id)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;
- (id)initWithWorkspace:(id)arg1 andSymbol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

