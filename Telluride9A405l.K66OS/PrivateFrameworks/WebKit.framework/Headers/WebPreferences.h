/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class WebPreferencesPrivate;

@interface WebPreferences : NSObject <NSCoding> {
@private
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x353dc761; S=0x353dc745; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x3537a429; S=0x353dc4c5; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x3537a34d; S=0x353dc419; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x3537a36d; S=0x35399f0d; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x35379cf5; S=0x353dc091; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x35379cd5; S=0x353dc075; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x353dba25; S=0x353dba45; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x353db9e9; S=0x353dba09; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x3537a625; S=0x353dc2d1; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x353dc265; S=0x353dc281; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x3537a0bd; S=0x353dbf95; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x3537a4a9; S=0x353dc70d; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x3537a09d; S=0x353dbf79; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x353949a5; S=0x35372ee1; converted property
@property(assign) BOOL autosaves;	// G=0x353db2f9; S=0x35372da9; converted property
@property(assign) unsigned cacheModel;	// G=0x353722f9; S=0x35372dc9; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x3537a38d; S=0x353dc3fd; converted property
@property(retain) id cursiveFontFamily;	// G=0x35379a41; S=0x353db909; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x3537a32d; S=0x353dbf41; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x35379f69; S=0x353dc389; converted property
@property(assign) BOOL databasesEnabled;	// G=0x35374c95; S=0x35399eb9; converted property
@property(assign) int defaultFixedFontSize;	// G=0x35379b75; S=0x353db95d; converted property
@property(assign) int defaultFontSize;	// G=0x35379b91; S=0x353db941; converted property
@property(retain) id defaultTextEncodingName;	// G=0x35379bad; S=0x353db9b1; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x3537a001; S=0x353dbf5d; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x3537a6dd; S=0x35399ef1; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x3537a719; S=0x353dc4fd; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x3537a6fd; S=0x353dc4e1; converted property
@property(assign) int editableLinkBehavior;	// G=0x35379e9d; S=0x353dc2f9; converted property
@property(assign) int editingBehavior;	// G=0x35379ef5; S=0x353dc61d; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x353dc34d; S=0x353dc36d; converted property
@property(retain) id fantasyFontFamily;	// G=0x35379be9; S=0x353db925; converted property
@property(retain) id fixedFontFamily;	// G=0x35379c05; S=0x353db8b5; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x3537a449; S=0x353dc591; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x353dc6ed; S=0x353dc6d1; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x3537a4e9; S=0x353dc601; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x35379c75; S=0x35399e19; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x3537a2ed; S=0x353dc005; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x35379d15; S=0x353db9cd; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x35379c95; S=0x35399e35; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x35379e3d; S=0x353dba61; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x35379e5d; S=0x353dc729; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x3537a2ad; S=0x353dbfcd; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x35379da9; S=0x35399ed5; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x353dc781; S=0x353dc7a1; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x3537a605; S=0x3537d475; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x3537a5e5; S=0x353dc7bd; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x3537a4c9; S=0x353dc5e5; converted property
@property(assign) int minimumFontSize;	// G=0x35379d35; S=0x353db979; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x35379d51; S=0x353db995; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x3537a2cd; S=0x35372f01; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x3537a489; S=0x353dc5c9; converted property
@property(retain) id pictographFontFamily;	// G=0x35379d6d; S=0x353dc7d9; converted property
@property(assign) unsigned pluginAllowedRunTime;	// G=0x3537a3ed; S=0x353dc575; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x35379dc9; S=0x3537d459; converted property
@property(retain) id sansSerifFontFamily;	// G=0x35379de9; S=0x353db8ed; converted property
@property(retain) id serifFontFamily;	// G=0x35379e05; S=0x353db8d1; converted property
@property(assign) BOOL showDebugBorders;	// G=0x3537a3ad; S=0x353dc435; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x3537a3cd; S=0x353dc451; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x35379e7d; S=0x3537b121; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x3537a469; S=0x353dc5ad; converted property
@property(retain) id standardFontFamily;	// G=0x35379e21; S=0x353db899; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x35374ff9; S=0x35373181; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x35379f29; S=0x353dc315; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x3537a581; S=0x353dc639; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x353db2e9; S=0x353db2ed; converted property
@property(retain) id userStyleSheetLocation;	// G=0x353db2f1; S=0x353db2f5; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x35379bc9; S=0x353dc03d; converted property
@property(assign) BOOL usesPageCache;	// G=0x35379fe1; S=0x353dba7d; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x3537a28d; S=0x353dbfb1; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x3537a409; S=0x353dc46d; converted property
@property(assign) BOOL webGLEnabled;	// G=0x353dc489; S=0x353dc4a9; converted property
@property(assign) BOOL webInspectorServerEnabled;	// G=0x3537a735; S=0x353dc519; converted property
@property(assign) short webInspectorServerPort;	// G=0x353dc535; S=0x353dc559; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x35379cb5; S=0x353dc059; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x3537a30d; S=0x353dc021; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x3537a6a1; S=0x353dbfe9; converted property
+ (id)_IBCreatorID;	// 0x3537214d
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x353dc7f5
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x35399ddd
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x3537215d
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x353dc845
+ (void)_setIBCreatorID:(id)anId;	// 0x353dc89d
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x353731b9
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x353721a9
+ (unsigned long)_systemCFStringEncoding;	// 0x35373269
+ (void)initialize;	// 0x35371285
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x353dc9b5
+ (id)standardPreferences;	// 0x35371f39
- (id)init;	// 0x353db319
- (id)initWithCoder:(id)coder;	// 0x353dbb4d
- (id)initWithIdentifier:(id)identifier;	// 0x35399dc9
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x35371f6d
- (int)_NSURLDiskCacheSize;	// 0x35372d31
- (int)_NSURLMaxRequestSize;	// 0x35372d4d
- (int)_NSURLMemoryCacheSize;	// 0x35372d15
- (BOOL)_aggressivePreloading;	// 0x35372d69
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x353dc245
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x3537a17d
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x3537a24d
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x3537a26d
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x3537a15d
- (double)_backForwardCacheExpirationInterval;	// 0x353dc0ad
- (BOOL)_boolValueForKey:(id)key;	// 0x35372d89
- (id)_diskImageCacheSavedCacheDirectory;	// 0x353757bd
- (float)_floatValueForKey:(id)key;	// 0x3537a1f5
- (BOOL)_forceFTPDirectoryListings;	// 0x35379c21
- (id)_ftpDirectoryTemplatePath;	// 0x35379c41
- (int)_integerValueForKey:(id)key;	// 0x35372315
- (void)_invalidateCachedPreferences;	// 0x3537d27d
- (int)_layoutInterval;	// 0x3537a1bd
- (id)_localStorageDatabasePath;	// 0x35376051
- (long long)_longLongValueForKey:(id)key;	// 0x3537a641
- (float)_maxParseDuration;	// 0x3537a1d9
- (unsigned long)_maximumImageSize;	// 0x3537a0fd
- (float)_minimumZoomFontSize;	// 0x3537a6c1
- (int)_objectCacheSize;	// 0x35372cf9
- (int)_pageCacheSize;	// 0x35372cdd
- (void)_postPreferencesChangedAPINotification;	// 0x353dc94d
- (void)_postPreferencesChangedNotification;	// 0x3537222d
- (void)_setAggressivePreloading:(BOOL)preloading;	// 0x353dc1d5
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x353dc229
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x353dc19d
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x353dc1f1
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x353dc20d
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x35399f29
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x35372f1d
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x353757f1
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x353dc3a5
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x3537d145
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x353dc3e1
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x35372e01
- (void)_setLayoutInterval:(int)interval;	// 0x3537d10d
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x35373001
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x353db4ed
- (void)_setMaxParseDuration:(float)duration;	// 0x35398f59
- (void)_setMinimumZoomFontSize:(float)size;	// 0x3537d129
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x353dc165
- (void)_setNSURLMaxRequestSize:(int)size;	// 0x353dc181
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x353dc149
- (void)_setObjectCacheSize:(int)size;	// 0x353dc12d
- (void)_setPageCacheSize:(int)size;	// 0x353dc111
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x353dc6c1
- (void)_setStandalone:(BOOL)standalone;	// 0x353dc0f5
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x3537303d
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x3537b15d
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x353db64d
- (void)_setUnsignedShortValue:(int)value forKey:(id)key;	// 0x353db7b9
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;	// 0x353dc1b9
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x353dc331
- (BOOL)_standalone;	// 0x3537a0dd
- (id)_stringValueForKey:(id)key;	// 0x35373129
- (BOOL)_telephoneNumberParsingEnabled;	// 0x3537a13d
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x353db605
- (int)_unsignedShortValueForKey:(id)key;	// 0x353db765
- (BOOL)_useLegacyNumberInputFieldFormatting;	// 0x3537a19d
- (BOOL)_useSiteSpecificSpoofing;	// 0x35379a21
- (id)_valueForKey:(id)key;	// 0x3537235d
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x3537a429
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x3537a34d
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x3537a36d
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x35379cf5
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x35379cd5
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x353dba25
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x353db9e9
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x3537a625
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x353dc265
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x3537a0bd
- (BOOL)arePlugInsEnabled;	// 0x35379d89
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x3537a4a9
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x3537a09d
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x353949a5
// converted property getter: - (BOOL)autosaves;	// 0x353db2f9
// converted property getter: - (unsigned)cacheModel;	// 0x353722f9
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x3537a38d
// converted property getter: - (id)cursiveFontFamily;	// 0x35379a41
// converted property getter: - (BOOL)databasesEnabled;	// 0x35374c95
- (void)dealloc;	// 0x353dbb01
// converted property getter: - (int)defaultFixedFontSize;	// 0x35379b75
// converted property getter: - (int)defaultFontSize;	// 0x35379b91
// converted property getter: - (id)defaultTextEncodingName;	// 0x35379bad
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x3537a001
- (void)didRemoveFromWebView;	// 0x353dc655
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x3537a6dd
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x3537a719
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x3537a6fd
// converted property getter: - (int)editableLinkBehavior;	// 0x35379e9d
// converted property getter: - (int)editingBehavior;	// 0x35379ef5
- (void)encodeWithCoder:(id)coder;	// 0x353db3ed
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x353dc34d
// converted property getter: - (id)fantasyFontFamily;	// 0x35379be9
// converted property getter: - (id)fixedFontFamily;	// 0x35379c05
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x353dc6ed
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x3537a4e9
- (id)identifier;	// 0x353db2c9
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x353dc761
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x3537a32d
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x35379f69
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x3537a449
// converted property getter: - (BOOL)isJavaEnabled;	// 0x35379c75
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x35379c95
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x3537a469
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x35379cb5
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x3537a30d
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x3537a2ed
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x35379d15
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x35379e3d
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x35379e5d
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x3537a2ad
// converted property getter: - (BOOL)localStorageEnabled;	// 0x35379da9
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x353dc781
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x3537a605
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x3537a5e5
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x3537a4c9
// converted property getter: - (int)minimumFontSize;	// 0x35379d35
// converted property getter: - (int)minimumLogicalFontSize;	// 0x35379d51
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x3537a2cd
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x3537a489
// converted property getter: - (id)pictographFontFamily;	// 0x35379d6d
// converted property getter: - (unsigned)pluginAllowedRunTime;	// 0x3537a3ed
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x35379dc9
// converted property getter: - (id)sansSerifFontFamily;	// 0x35379de9
// converted property getter: - (id)serifFontFamily;	// 0x35379e05
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x353dc745
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x353dc4c5
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x353dc419
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x35399f0d
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x353dc091
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x353dc075
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x353dba45
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x353dba09
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x353dc2d1
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x353dc281
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x353dbf95
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x353dc70d
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x353dbf79
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x35372ee1
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x35372da9
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x35372dc9
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x353dc3fd
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x353db909
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x353dbf41
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x353dc389
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x35399eb9
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x353db95d
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x353db941
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x353db9b1
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x353dbf5d
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x35399ef1
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x353dc4fd
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x353dc4e1
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x353dc2f9
// converted property setter: - (void)setEditingBehavior:(int)behavior;	// 0x353dc61d
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x353dc36d
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x353db925
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x353db8b5
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x353dc591
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x353dc6d1
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x353dc601
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x35399e19
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x353dc005
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x353db9cd
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x35399e35
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x353dba61
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x353dc729
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x353dbfcd
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x35399ed5
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x353dc7a1
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x3537d475
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x353dc7bd
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x353dc5e5
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x353db979
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x353db995
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x35372f01
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x353dc5c9
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x353dc7d9
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x3537319d
// converted property setter: - (void)setPluginAllowedRunTime:(unsigned)time;	// 0x353dc575
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x3537d459
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x353db8ed
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x353db8d1
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x353dc435
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x353dc451
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x3537b121
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x353dc5ad
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x353db899
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x35373181
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x353dc315
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x353dc639
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x353db2ed
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x353db2f5
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x353dc03d
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x353dba7d
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x353dbfb1
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x353dc46d
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x353dc4a9
// converted property setter: - (void)setWebInspectorServerEnabled:(BOOL)enabled;	// 0x353dc519
// converted property setter: - (void)setWebInspectorServerPort:(short)port;	// 0x353dc559
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x353dc059
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x353dc021
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x353dbfe9
// converted property getter: - (BOOL)showDebugBorders;	// 0x3537a3ad
// converted property getter: - (BOOL)showRepaintCounter;	// 0x3537a3cd
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x35379e7d
// converted property getter: - (id)standardFontFamily;	// 0x35379e21
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x35374ff9
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x35379f29
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x3537a581
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x353db2e9
// converted property getter: - (id)userStyleSheetLocation;	// 0x353db2f1
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x35379bc9
// converted property getter: - (BOOL)usesPageCache;	// 0x35379fe1
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x3537a28d
// converted property getter: - (BOOL)webAudioEnabled;	// 0x3537a409
// converted property getter: - (BOOL)webGLEnabled;	// 0x353dc489
// converted property getter: - (BOOL)webInspectorServerEnabled;	// 0x3537a735
// converted property getter: - (short)webInspectorServerPort;	// 0x353dc535
- (void)willAddToWebView;	// 0x35374745
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x3537a6a1
@end

