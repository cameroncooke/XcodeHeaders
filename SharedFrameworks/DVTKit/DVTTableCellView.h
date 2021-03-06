//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSAttributedString, NSDictionary, NSFont, NSImage, NSLayoutConstraint, NSMutableDictionary, NSString, _DVTTableCellViewTextField;

@interface DVTTableCellView : NSTableCellView
{
    NSMutableDictionary *_statusViewNamesToStatusViews;
    NSString *_accessibleImageDescription;
    BOOL _usesGroupHeaderStyle;
    int _titleStyle;
    id <DVTTableCellViewTitleEditingDelegate> _titleEditingDelegate;
    NSString *_filterMatchString;
    NSDictionary *_objectToViewOneWayPropertyBindings;
    _DVTTableCellViewTextField *_titleTextField;
    _DVTTableCellViewTextField *_subtitleTextField;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewToTitleSpacingConstraint;
    NSLayoutConstraint *_topSpacingConstraint;
    NSLayoutConstraint *_bottomSpacingConstraint;
}

+ (double)prototypeHeightUsingDVTTableCellViewNibName:(id)arg1;
+ (id)keyPathsForValuesAffectingSubtitleFont;
+ (id)keyPathsForValuesAffectingTitleFont;
+ (id)keyPathsForValuesAffectingAttributedSubtitle;
+ (id)keyPathsForValuesAffectingAttributedTitle;
+ (id)keyPathsForValuesAffectingSubtitleLineBreakMode;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitleEditable;
+ (id)keyPathsForValuesAffectingTitleLineBreakMode;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingImage;
@property __weak NSLayoutConstraint *bottomSpacingConstraint; // @synthesize bottomSpacingConstraint=_bottomSpacingConstraint;
@property __weak NSLayoutConstraint *topSpacingConstraint; // @synthesize topSpacingConstraint=_topSpacingConstraint;
@property __weak NSLayoutConstraint *imageViewToTitleSpacingConstraint; // @synthesize imageViewToTitleSpacingConstraint=_imageViewToTitleSpacingConstraint;
@property __weak NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property __weak NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property __weak _DVTTableCellViewTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property __weak _DVTTableCellViewTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(copy, nonatomic) NSDictionary *objectToViewOneWayPropertyBindings; // @synthesize objectToViewOneWayPropertyBindings=_objectToViewOneWayPropertyBindings;
@property(retain, nonatomic) NSString *filterMatchString; // @synthesize filterMatchString=_filterMatchString;
@property(nonatomic) int titleStyle; // @synthesize titleStyle=_titleStyle;
@property(nonatomic) BOOL usesGroupHeaderStyle; // @synthesize usesGroupHeaderStyle=_usesGroupHeaderStyle;
@property __weak id <DVTTableCellViewTitleEditingDelegate> titleEditingDelegate; // @synthesize titleEditingDelegate=_titleEditingDelegate;
- (void).cxx_destruct;
- (void)startEditingTitleTextField;
- (id)statusViewWithName:(id)arg1;
- (void)removeStatusView:(id)arg1;
- (id)_findConstraintsPinningViewToSelfsTrailingEdge;
- (void)addStatusView:(id)arg1 withName:(id)arg2;
@property(readonly) BOOL hasStatusViews;
@property(readonly) NSMutableDictionary *statusViewNamesToStatusViews;
- (id)toolTip;
- (id)_titleColor;
- (void)_updateTextFieldsBasedOnFonts;
@property(readonly) NSFont *subtitleFont;
@property(readonly) NSFont *titleFont;
@property(retain, nonatomic) NSAttributedString *attributedSubtitle;
@property(retain, nonatomic) NSAttributedString *attributedTitle;
@property(nonatomic) unsigned long long subtitleLineBreakMode;
@property(retain, nonatomic) NSString *subtitle;
@property(nonatomic) BOOL titleEditable;
@property(nonatomic) unsigned long long titleLineBreakMode;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *accessibleImageDescription;
@property(retain, nonatomic) NSImage *image;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingAutoProperties;
- (void)_startObservingAutoProperties;
- (void)_updateAutoProperties;
- (void)setObjectValue:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

@end

