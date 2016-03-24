//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSBundle.h"

@class SKResourceManager;

@interface SKWorkspaceBundle : NSBundle
{
    NSBundle *_superInstance;
    SKResourceManager *_resourceManager;
}

@property(retain, nonatomic) SKResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
- (void).cxx_destruct;
- (id)localizedInfoDictionary;
- (id)localizations;
- (id)developmentLocalization;
- (id)preferredLocalizations;
- (BOOL)unload;
- (BOOL)isLoaded;
- (BOOL)load;
- (BOOL)loadAndReturnError:(id *)arg1;
- (BOOL)preflightAndReturnError:(id *)arg1;
- (id)executableArchitectures;
- (id)resourceURL;
- (id)sharedSupportPath;
- (id)sharedSupportURL;
- (id)sharedFrameworksPath;
- (id)sharedFrameworksURL;
- (id)privateFrameworksPath;
- (id)privateFrameworksURL;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (id)executablePath;
- (id)executableURL;
- (id)builtInPlugInsPath;
- (id)builtInPlugInsURL;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)infoDictionary;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)bundleURL;
- (id)appStoreReceiptURL;
- (id)resourcePath;
- (Class)principalClass;
- (Class)classNamed:(id)arg1;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
@property(readonly, nonatomic) BOOL isCurrentSKResourceBundle;
- (id)initWithResourceManager:(id)arg1;

@end

