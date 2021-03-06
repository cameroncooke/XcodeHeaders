//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InterfaceBuilderKit/IBLibraryClassDetailController.h>

@class NSArray, NSMutableIndexSet, NSString;

@interface IBLibraryLineageClassDetailController : IBLibraryClassDetailController
{
    NSMutableIndexSet *rowsWithRemovableSuperclasses;
    BOOL canSetSuperclassForFirstTime;
    NSString *classWithoutSuperclass;
    NSArray *currentClassLineage;
    NSString *unknownClassName;
    NSArray *sortedClassList;
}

@property(copy, nonatomic) NSString *classWithoutSuperclass; // @synthesize classWithoutSuperclass;
@property(retain, nonatomic) NSArray *currentClassLineage; // @synthesize currentClassLineage;
@property(copy, nonatomic) NSString *unknownClassName; // @synthesize unknownClassName;
- (BOOL)classLineageView:(id)arg1 editedValueIsValid:(id)arg2 error:(id *)arg3;
- (id)classLineageView:(id)arg1 completionAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfCompletionsForClassLineageView:(id)arg1;
- (void)classLineageView:(id)arg1 didClickBadgeForRow:(unsigned long long)arg2;
- (id)classLineageView:(id)arg1 badgeForRow:(unsigned long long)arg2 inRect:(struct CGRect)arg3;
- (BOOL)classLineageView:(id)arg1 rowShouldBeBordered:(unsigned long long)arg2;
- (void)classLineageView:(id)arg1 setLabel:(id)arg2 forRow:(unsigned long long)arg3;
- (void)classLineageView:(id)arg1 didClickRow:(unsigned long long)arg2;
- (BOOL)classLineageView:(id)arg1 canClickRow:(unsigned long long)arg2;
- (double)classLineageView:(id)arg1 alphaForRowWithLabel:(id)arg2 row:(unsigned long long)arg3;
- (id)classLineageView:(id)arg1 labelForRow:(unsigned long long)arg2;
- (unsigned long long)numberOfRowsInClassLineageView:(id)arg1;
- (BOOL)canRemoveSuperClassForRow:(unsigned long long)arg1;
- (BOOL)rowIsSetSuperClassRow:(unsigned long long)arg1;
- (BOOL)requiresResizeAfterRefresh;
- (double)preferredHeight;
- (id)viewNibName;
- (id)label;
- (void)refreshWithClassName:(id)arg1;
- (BOOL)canSetSuperclassOfClassNamed:(id)arg1;
- (id)lineageView;
- (void)dealloc;

@end

