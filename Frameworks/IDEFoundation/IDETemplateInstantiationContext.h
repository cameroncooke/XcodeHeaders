//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class DVTFilePath, IDEContainerItem, IDEGroup, IDETemplate, IDEWorkspace, NSArray;

@interface IDETemplateInstantiationContext : NSObject <NSCopying>
{
    BOOL _showsCrossPlatformSection;
    BOOL _alwaysReplaceFiles;
    BOOL _reuseFileReferences;
    IDEWorkspace *_workspace;
    IDETemplate *_documentTemplate;
    DVTFilePath *_documentFilePath;
    NSArray *_instantiatedItems;
    IDEContainerItem *_primaryInstantiatedItem;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_destinationBuildables;
    IDEWorkspace *_createdWorkspace;
}

@property BOOL reuseFileReferences; // @synthesize reuseFileReferences=_reuseFileReferences;
@property BOOL alwaysReplaceFiles; // @synthesize alwaysReplaceFiles=_alwaysReplaceFiles;
@property(retain) IDEWorkspace *createdWorkspace; // @synthesize createdWorkspace=_createdWorkspace;
@property BOOL showsCrossPlatformSection; // @synthesize showsCrossPlatformSection=_showsCrossPlatformSection;
@property(copy) NSArray *destinationBuildables; // @synthesize destinationBuildables=_destinationBuildables;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property(retain) IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property(retain) IDEContainerItem *primaryInstantiatedItem; // @synthesize primaryInstantiatedItem=_primaryInstantiatedItem;
@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
@property(retain) DVTFilePath *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property(retain, nonatomic) IDETemplate *documentTemplate; // @synthesize documentTemplate=_documentTemplate;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)destinationBlueprintProvider;
- (id)sectionsForAvailableTemplatesOfKind:(id)arg1;
- (id)arrayBySortingSections:(id)arg1;
- (id)standardSectionNames;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

