/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "WebKit-Structs.h"


@interface WebPreferences : NSObject <NSCoding> {
	WebPreferencesPrivate *_private;	// 4 = 0x4
}
@property(assign, getter=isAVFoundationEnabled) BOOL aVFoundationEnabled;	// G=0x350a54c5; S=0x350a54a9; converted property
@property(assign) BOOL accelerated2dCanvasEnabled;	// G=0x35041a81; S=0x350a5289; converted property
@property(assign) BOOL acceleratedCompositingEnabled;	// G=0x350419c1; S=0x350a5185; converted property
@property(assign) BOOL acceleratedDrawingEnabled;	// G=0x350419e1; S=0x350a514d; converted property
@property(assign) BOOL allowFileAccessFromFileURLs;	// G=0x35041375; S=0x350a4aa9; converted property
@property(assign) BOOL allowUniversalAccessFromFileURLs;	// G=0x35041355; S=0x350a4a8d; converted property
@property(assign) BOOL allowsAnimatedImageLooping;	// G=0x350a4855; S=0x350a4875; converted property
@property(assign) BOOL allowsAnimatedImages;	// G=0x350a4819; S=0x350a4839; converted property
@property(assign) long long applicationCacheDefaultOriginQuota;	// G=0x35041df5; S=0x350a4cc9; converted property
@property(assign) long long applicationCacheTotalQuota;	// G=0x350a4c5d; S=0x350a4c79; converted property
@property(assign) BOOL applicationChromeModeEnabled;	// G=0x3504171d; S=0x350a4999; converted property
@property(assign) BOOL asynchronousSpellCheckingEnabled;	// G=0x35041b21; S=0x350a5469; converted property
@property(assign) unsigned audioSessionCategoryOverride;	// G=0x350a551d; S=0x350a5539; converted property
@property(assign) BOOL authorAndUserStylesEnabled;	// G=0x350416fd; S=0x350a497d; converted property
@property(assign) BOOL automaticallyDetectsCacheModel;	// G=0x350a4a41; S=0x35039dbd; converted property
@property(assign) BOOL autosaves;	// G=0x350a48ad; S=0x35039a51; converted property
@property(assign) BOOL backspaceKeyNavigationEnabled;	// G=0x35041d29; S=0x350a564d; converted property
@property(assign) unsigned cacheModel;	// G=0x3503a385; S=0x35039a65; converted property
@property(assign) BOOL canvasUsesAcceleratedDrawing;	// G=0x35041a01; S=0x350a5169; converted property
@property(retain) id cursiveFontFamily;	// G=0x35041075; S=0x350a46f1; converted property
@property(assign, getter=isDNSPrefetchingEnabled) BOOL dNSPrefetchingEnabled;	// G=0x350419a1; S=0x350a4945; converted property
@property(assign, getter=isDOMPasteAllowed) BOOL dOMPasteAllowed;	// G=0x350415a1; S=0x350a50d9; converted property
@property(assign) BOOL databasesEnabled;	// G=0x3503c415; S=0x350a4d45; converted property
@property(assign) int defaultFixedFontSize;	// G=0x350411f5; S=0x350a4745; converted property
@property(assign) int defaultFontSize;	// G=0x35041211; S=0x350a4729; converted property
@property(retain) id defaultTextEncodingName;	// G=0x3504122d; S=0x350a4799; converted property
@property(assign) BOOL developerExtrasEnabled;	// G=0x35041659; S=0x350a4961; converted property
@property(assign) BOOL diskImageCacheEnabled;	// G=0x35041eb5; S=0x350a52a5; converted property
@property(assign) unsigned diskImageCacheMaximumCacheSize;	// G=0x35041ef1; S=0x350a52dd; converted property
@property(assign) unsigned diskImageCacheMinimumImageSize;	// G=0x35041ed5; S=0x350a52c1; converted property
@property(assign) int editableLinkBehavior;	// G=0x3504151d; S=0x350a4cf1; converted property
@property(assign) int editingBehavior;	// G=0x3504154d; S=0x350a5385; converted property
@property(assign) BOOL experimentalNotificationsEnabled;	// G=0x350a4d7d; S=0x350a4d9d; converted property
@property(retain) id fantasyFontFamily;	// G=0x35041269; S=0x350a470d; converted property
@property(retain) id fixedFontFamily;	// G=0x35041285; S=0x350a469d; converted property
@property(assign, getter=isFrameFlatteningEnabled) BOOL frameFlatteningEnabled;	// G=0x35041aa1; S=0x350a52f9; converted property
@property(assign) BOOL fullScreenEnabled;	// G=0x350a5449; S=0x350a542d; converted property
@property(assign, getter=isHixie76WebSocketProtocolEnabled) BOOL hixie76WebSocketProtocolEnabled;	// G=0x35041cc9; S=0x350a54e5; converted property
@property(assign) BOOL hyperlinkAuditingEnabled;	// G=0x35041b61; S=0x350a5369; converted property
@property(assign) double incrementalRenderingSuppressionTimeoutInSeconds;	// G=0x35041dc9; S=0x350a57c9; converted property
@property(assign, getter=isJavaEnabled) BOOL javaEnabled;	// G=0x350412f5; S=0x350a47c5; converted property
@property(assign) BOOL javaScriptCanAccessClipboard;	// G=0x35041961; S=0x350a4a09; converted property
@property(assign) BOOL javaScriptCanOpenWindowsAutomatically;	// G=0x35041395; S=0x350a47fd; converted property
@property(assign, getter=isJavaScriptEnabled) BOOL javaScriptEnabled;	// G=0x35041315; S=0x350a47e1; converted property
@property(assign) BOOL loadsImagesAutomatically;	// G=0x350414bd; S=0x350a4891; converted property
@property(assign) BOOL loadsSiteIconsIgnoringImageLoadingPreference;	// G=0x350414dd; S=0x350a548d; converted property
@property(assign) BOOL localFileContentSniffingEnabled;	// G=0x35041921; S=0x350a49d1; converted property
@property(assign) BOOL localStorageEnabled;	// G=0x35041429; S=0x350a4d61; converted property
@property(assign) BOOL mediaPlaybackAllowsAirPlay;	// G=0x35041ca9; S=0x350a5501; converted property
@property(assign) BOOL mediaPlaybackAllowsInline;	// G=0x35041c89; S=0x350463ed; converted property
@property(assign) BOOL mediaPlaybackRequiresUserGesture;	// G=0x35041c69; S=0x350a5555; converted property
@property(assign) BOOL memoryInfoEnabled;	// G=0x35041b41; S=0x350a534d; converted property
@property(assign) int minimumFontSize;	// G=0x350413b5; S=0x350a4761; converted property
@property(assign) int minimumLogicalFontSize;	// G=0x350413d1; S=0x350a477d; converted property
@property(assign) BOOL mockScrollbarsEnabled;	// G=0x35041d69; S=0x350a5571; converted property
@property(assign) BOOL notificationsEnabled;	// G=0x350a5755; S=0x350a5739; converted property
@property(assign) BOOL offlineWebApplicationCacheEnabled;	// G=0x35041941; S=0x35039dd1; converted property
@property(assign) BOOL pageCacheSupportsPlugins;	// G=0x35041639; S=0x350a55a9; converted property
@property(assign) BOOL paginateDuringLayoutEnabled;	// G=0x35041ae1; S=0x350a5331; converted property
@property(retain) id pictographFontFamily;	// G=0x350413ed; S=0x350a558d; converted property
@property(assign) BOOL privateBrowsingEnabled;	// G=0x35041449; S=0x350463d1; converted property
@property(assign) BOOL regionBasedColumnsEnabled;	// G=0x35041d09; S=0x350a5775; converted property
@property(assign) BOOL requestAnimationFrameEnabled;	// G=0x35041da9; S=0x350a57ad; converted property
@property(retain) id sansSerifFontFamily;	// G=0x35041469; S=0x350a46d5; converted property
@property(retain) id serifFontFamily;	// G=0x35041485; S=0x350a46b9; converted property
@property(assign) BOOL shouldDisplayCaptions;	// G=0x350a56dd; S=0x350a56c1; converted property
@property(assign) BOOL shouldDisplaySubtitles;	// G=0x350a56a1; S=0x350a5685; converted property
@property(assign) BOOL shouldDisplayTextDescriptions;	// G=0x350a5719; S=0x350a56fd; converted property
@property(assign) BOOL shouldRespectImageOrientation;	// G=0x35041d89; S=0x350a5791; converted property
@property(assign) BOOL showDebugBorders;	// G=0x35041a21; S=0x350a51f9; converted property
@property(assign) BOOL showRepaintCounter;	// G=0x35041a41; S=0x350a5215; converted property
@property(assign) BOOL shrinksStandaloneImagesToFit;	// G=0x350414fd; S=0x35042add; converted property
@property(assign, getter=isSpatialNavigationEnabled) BOOL spatialNavigationEnabled;	// G=0x35041ac1; S=0x350a5315; converted property
@property(retain) id standardFontFamily;	// G=0x350414a1; S=0x350a4681; converted property
@property(assign) BOOL storageTrackerEnabled;	// G=0x3503c725; S=0x3503a191; converted property
@property(assign) BOOL suppressesIncrementalRendering;	// G=0x35041ce9; S=0x350a4929; converted property
@property(assign) int textDirectionSubmenuInclusionBehavior;	// G=0x35041571; S=0x350a4d0d; converted property
@property(assign) BOOL usePreHTML5ParserQuirks;	// G=0x35041c05; S=0x350a53a1; converted property
@property(assign) BOOL userStyleSheetEnabled;	// G=0x350a47b5; S=0x350a47b9; converted property
@property(retain) id userStyleSheetLocation;	// G=0x350a47bd; S=0x350a47c1; converted property
@property(assign) BOOL usesEncodingDetector;	// G=0x35041249; S=0x350a4a55; converted property
@property(assign) BOOL usesPageCache;	// G=0x35041619; S=0x350a48c1; converted property
@property(assign) BOOL wantsBalancedSetDefersLoadingBehavior;	// G=0x35041d49; S=0x350a5669; converted property
@property(assign) BOOL webArchiveDebugModeEnabled;	// G=0x35041901; S=0x350a49b5; converted property
@property(assign) BOOL webAudioEnabled;	// G=0x35041a61; S=0x350a5231; converted property
@property(assign) BOOL webGLEnabled;	// G=0x350a524d; S=0x350a526d; converted property
@property(assign, getter=isWebSecurityEnabled) BOOL webSecurityEnabled;	// G=0x35041335; S=0x350a4a71; converted property
@property(assign, getter=isXSSAuditorEnabled) BOOL xSSAuditorEnabled;	// G=0x35041981; S=0x350a4a25; converted property
@property(assign) BOOL zoomsTextOnly;	// G=0x35041e79; S=0x350a49ed; converted property
+ (id)_IBCreatorID;	// 0x350398ed
+ (void)_checkLastReferenceForIdentifier:(id)identifier;	// 0x350a4db9
+ (id)_concatenateKeyWithIBCreatorID:(id)ibcreatorID;	// 0x350a57f1
+ (id)_getInstanceForIdentifier:(id)identifier;	// 0x350398fd
+ (void)_removeReferenceForIdentifier:(id)identifier;	// 0x350a4e09
+ (void)_setCurrentNetworkLoaderSessionCookieAcceptPolicy:(unsigned)policy;	// 0x350a4fdd
+ (void)_setIBCreatorID:(id)anId;	// 0x350a4ecd
+ (void)_setInitialDefaultTextEncodingToSystemEncoding;	// 0x3503a1e5
+ (void)_setInstance:(id)instance forIdentifier:(id)identifier;	// 0x35039945
+ (void)_switchNetworkLoaderToNewTestingSession;	// 0x350a4f09
+ (unsigned long)_systemCFStringEncoding;	// 0x3503a28d
+ (void)initialize;	// 0x35038a71
+ (void)setWebKitLinkTimeVersion:(int)version;	// 0x350a5485
+ (id)standardPreferences;	// 0x350396f1
- (id)init;	// 0x350a36c5
- (id)initWithCoder:(id)coder;	// 0x350a379d
- (id)initWithIdentifier:(id)identifier;	// 0x350a3789
- (id)initWithIdentifier:(id)identifier sendChangeNotification:(BOOL)notification;	// 0x35039725
- (int)_NSURLDiskCacheSize;	// 0x3503b281
- (int)_NSURLMaxRequestSize;	// 0x3503b29d
- (int)_NSURLMemoryCacheSize;	// 0x3503b265
- (BOOL)_allowCompositingLayerVisualDegradation;	// 0x350418e1
- (BOOL)_allowMultiElementImplicitFormSubmission;	// 0x350417dd
- (BOOL)_alwaysRequestGeolocationPermission;	// 0x350418a1
- (BOOL)_alwaysUseAcceleratedOverflowScroll;	// 0x350418c1
- (BOOL)_alwaysUseBaselineOfPrimaryFont;	// 0x350417bd
- (double)_backForwardCacheExpirationInterval;	// 0x350a4ac5
- (BOOL)_boolValueForKey:(id)key;	// 0x35039ed9
- (id)_diskImageCacheSavedCacheDirectory;	// 0x3503cdd5
- (float)_floatValueForKey:(id)key;	// 0x35041855
- (BOOL)_forceFTPDirectoryListings;	// 0x350412a1
- (id)_ftpDirectoryTemplatePath;	// 0x350412c1
- (int)_integerValueForKey:(id)key;	// 0x35039b99
- (int)_interpolationQuality;	// 0x35041f0d
- (void)_invalidateCachedPreferences;	// 0x35046295
- (int)_layoutInterval;	// 0x3504181d
- (id)_localStorageDatabasePath;	// 0x3503d809
- (long long)_longLongValueForKey:(id)key;	// 0x35041e11
- (float)_maxParseDuration;	// 0x35041839
- (unsigned long)_maximumImageSize;	// 0x3504175d
- (float)_minimumZoomFontSize;	// 0x35041e99
- (int)_objectCacheSize;	// 0x3503b249
- (int)_pageCacheSize;	// 0x3503b22d
- (void)_postCacheModelChangedNotification;	// 0x350a48dd
- (void)_postPreferencesChangedAPINotification;	// 0x350a4e61
- (void)_postPreferencesChangedNotification;	// 0x350399d1
- (void)_setAllowCompositingLayerVisualDegradation:(BOOL)degradation;	// 0x3503a1ad
- (void)_setAllowMultiElementImplicitFormSubmission:(BOOL)submission;	// 0x350a4bd1
- (void)_setAlwaysRequestGeolocationPermission:(BOOL)permission;	// 0x350a4c09
- (void)_setAlwaysUseAcceleratedOverflowScroll:(BOOL)scroll;	// 0x350a4c25
- (void)_setAlwaysUseBaselineOfPrimaryFont:(BOOL)primaryFont;	// 0x350a4bb5
- (void)_setBoolValue:(BOOL)value forKey:(id)key;	// 0x35039ded
- (void)_setDiskImageCacheSavedCacheDirectory:(id)directory;	// 0x3503ce09
- (void)_setFTPDirectoryTemplatePath:(id)path;	// 0x350a50f5
- (void)_setFloatValue:(float)value forKey:(id)key;	// 0x35044219
- (void)_setForceFTPDirectoryListings:(BOOL)listings;	// 0x350a5131
- (void)_setIntegerValue:(int)value forKey:(id)key;	// 0x35039ab1
- (void)_setInterpolationQuality:(int)quality;	// 0x350a4c41
- (void)_setLayoutInterval:(int)interval;	// 0x350441e1
- (void)_setLocalStorageDatabasePath:(id)path;	// 0x3503a005
- (void)_setLongLongValue:(long long)value forKey:(id)key;	// 0x350a42f1
- (void)_setMaxParseDuration:(float)duration;	// 0x350565a1
- (void)_setMinimumZoomFontSize:(float)size;	// 0x350441fd
- (void)_setNSURLDiskCacheSize:(int)size;	// 0x350a4b7d
- (void)_setNSURLMaxRequestSize:(int)size;	// 0x350a4b99
- (void)_setNSURLMemoryCacheSize:(int)size;	// 0x350a4b61
- (void)_setObjectCacheSize:(int)size;	// 0x350a4b45
- (void)_setPageCacheSize:(int)size;	// 0x350a4b29
- (void)_setPreferenceForTestWithValue:(id)value forKey:(id)key;	// 0x350a541d
- (void)_setStandalone:(BOOL)standalone;	// 0x350a4b0d
- (void)_setStringValue:(id)value forKey:(id)key;	// 0x3503a041
- (void)_setTelephoneNumberParsingEnabled:(BOOL)enabled;	// 0x35042b19
- (void)_setUnsignedIntValue:(unsigned)value forKey:(id)key;	// 0x350a409d
- (void)_setUnsignedLongLongValue:(unsigned long long)value forKey:(id)key;	// 0x350a44e1
- (void)_setUseLegacyNumberInputFieldFormatting:(BOOL)formatting;	// 0x350a4bed
- (void)_setUseSiteSpecificSpoofing:(BOOL)spoofing;	// 0x350a4d29
- (BOOL)_standalone;	// 0x3504173d
- (id)_stringValueForKey:(id)key;	// 0x3503a13d
- (BOOL)_telephoneNumberParsingEnabled;	// 0x3504179d
- (unsigned)_unsignedIntValueForKey:(id)key;	// 0x350a4051
- (unsigned long long)_unsignedLongLongValueForKey:(id)key;	// 0x350a4491
- (BOOL)_useLegacyNumberInputFieldFormatting;	// 0x350417fd
- (BOOL)_useSiteSpecificSpoofing;	// 0x35041055
- (id)_valueForKey:(id)key;	// 0x35039be5
// converted property getter: - (BOOL)accelerated2dCanvasEnabled;	// 0x35041a81
// converted property getter: - (BOOL)acceleratedCompositingEnabled;	// 0x350419c1
// converted property getter: - (BOOL)acceleratedDrawingEnabled;	// 0x350419e1
// converted property getter: - (BOOL)allowFileAccessFromFileURLs;	// 0x35041375
// converted property getter: - (BOOL)allowUniversalAccessFromFileURLs;	// 0x35041355
// converted property getter: - (BOOL)allowsAnimatedImageLooping;	// 0x350a4855
// converted property getter: - (BOOL)allowsAnimatedImages;	// 0x350a4819
// converted property getter: - (long long)applicationCacheDefaultOriginQuota;	// 0x35041df5
// converted property getter: - (long long)applicationCacheTotalQuota;	// 0x350a4c5d
// converted property getter: - (BOOL)applicationChromeModeEnabled;	// 0x3504171d
- (BOOL)arePlugInsEnabled;	// 0x35041409
// converted property getter: - (BOOL)asynchronousSpellCheckingEnabled;	// 0x35041b21
// converted property getter: - (unsigned)audioSessionCategoryOverride;	// 0x350a551d
// converted property getter: - (BOOL)authorAndUserStylesEnabled;	// 0x350416fd
// converted property getter: - (BOOL)automaticallyDetectsCacheModel;	// 0x350a4a41
// converted property getter: - (BOOL)autosaves;	// 0x350a48ad
// converted property getter: - (BOOL)backspaceKeyNavigationEnabled;	// 0x35041d29
// converted property getter: - (unsigned)cacheModel;	// 0x3503a385
// converted property getter: - (BOOL)canvasUsesAcceleratedDrawing;	// 0x35041a01
- (BOOL)cssCustomFilterEnabled;	// 0x350a51a1
- (BOOL)cssRegionsEnabled;	// 0x35041b01
// converted property getter: - (id)cursiveFontFamily;	// 0x35041075
// converted property getter: - (BOOL)databasesEnabled;	// 0x3503c415
- (void)dealloc;	// 0x350a3d99
// converted property getter: - (int)defaultFixedFontSize;	// 0x350411f5
// converted property getter: - (int)defaultFontSize;	// 0x35041211
// converted property getter: - (id)defaultTextEncodingName;	// 0x3504122d
// converted property getter: - (BOOL)developerExtrasEnabled;	// 0x35041659
- (void)didRemoveFromWebView;	// 0x350a53bd
// converted property getter: - (BOOL)diskImageCacheEnabled;	// 0x35041eb5
// converted property getter: - (unsigned)diskImageCacheMaximumCacheSize;	// 0x35041ef1
// converted property getter: - (unsigned)diskImageCacheMinimumImageSize;	// 0x35041ed5
// converted property getter: - (int)editableLinkBehavior;	// 0x3504151d
// converted property getter: - (int)editingBehavior;	// 0x3504154d
- (void)encodeWithCoder:(id)coder;	// 0x350a3b4d
// converted property getter: - (BOOL)experimentalNotificationsEnabled;	// 0x350a4d7d
// converted property getter: - (id)fantasyFontFamily;	// 0x35041269
// converted property getter: - (id)fixedFontFamily;	// 0x35041285
// converted property getter: - (BOOL)fullScreenEnabled;	// 0x350a5449
// converted property getter: - (BOOL)hyperlinkAuditingEnabled;	// 0x35041b61
- (id)identifier;	// 0x350a3eb5
// converted property getter: - (double)incrementalRenderingSuppressionTimeoutInSeconds;	// 0x35041dc9
// converted property getter: - (BOOL)isAVFoundationEnabled;	// 0x350a54c5
// converted property getter: - (BOOL)isDNSPrefetchingEnabled;	// 0x350419a1
// converted property getter: - (BOOL)isDOMPasteAllowed;	// 0x350415a1
// converted property getter: - (BOOL)isFrameFlatteningEnabled;	// 0x35041aa1
// converted property getter: - (BOOL)isHixie76WebSocketProtocolEnabled;	// 0x35041cc9
// converted property getter: - (BOOL)isJavaEnabled;	// 0x350412f5
// converted property getter: - (BOOL)isJavaScriptEnabled;	// 0x35041315
// converted property getter: - (BOOL)isSpatialNavigationEnabled;	// 0x35041ac1
// converted property getter: - (BOOL)isWebSecurityEnabled;	// 0x35041335
// converted property getter: - (BOOL)isXSSAuditorEnabled;	// 0x35041981
// converted property getter: - (BOOL)javaScriptCanAccessClipboard;	// 0x35041961
// converted property getter: - (BOOL)javaScriptCanOpenWindowsAutomatically;	// 0x35041395
// converted property getter: - (BOOL)loadsImagesAutomatically;	// 0x350414bd
// converted property getter: - (BOOL)loadsSiteIconsIgnoringImageLoadingPreference;	// 0x350414dd
// converted property getter: - (BOOL)localFileContentSniffingEnabled;	// 0x35041921
// converted property getter: - (BOOL)localStorageEnabled;	// 0x35041429
// converted property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x35041ca9
// converted property getter: - (BOOL)mediaPlaybackAllowsInline;	// 0x35041c89
// converted property getter: - (BOOL)mediaPlaybackRequiresUserGesture;	// 0x35041c69
// converted property getter: - (BOOL)memoryInfoEnabled;	// 0x35041b41
// converted property getter: - (int)minimumFontSize;	// 0x350413b5
// converted property getter: - (int)minimumLogicalFontSize;	// 0x350413d1
// converted property getter: - (BOOL)mockScrollbarsEnabled;	// 0x35041d69
// converted property getter: - (BOOL)notificationsEnabled;	// 0x350a5755
// converted property getter: - (BOOL)offlineWebApplicationCacheEnabled;	// 0x35041941
// converted property getter: - (BOOL)pageCacheSupportsPlugins;	// 0x35041639
// converted property getter: - (BOOL)paginateDuringLayoutEnabled;	// 0x35041ae1
// converted property getter: - (id)pictographFontFamily;	// 0x350413ed
// converted property getter: - (BOOL)privateBrowsingEnabled;	// 0x35041449
// converted property getter: - (BOOL)regionBasedColumnsEnabled;	// 0x35041d09
// converted property getter: - (BOOL)requestAnimationFrameEnabled;	// 0x35041da9
// converted property getter: - (id)sansSerifFontFamily;	// 0x35041469
// converted property getter: - (id)serifFontFamily;	// 0x35041485
// converted property setter: - (void)setAVFoundationEnabled:(BOOL)enabled;	// 0x350a54a9
// converted property setter: - (void)setAccelerated2dCanvasEnabled:(BOOL)enabled;	// 0x350a5289
// converted property setter: - (void)setAcceleratedCompositingEnabled:(BOOL)enabled;	// 0x350a5185
// converted property setter: - (void)setAcceleratedDrawingEnabled:(BOOL)enabled;	// 0x350a514d
// converted property setter: - (void)setAllowFileAccessFromFileURLs:(BOOL)fileURLs;	// 0x350a4aa9
// converted property setter: - (void)setAllowUniversalAccessFromFileURLs:(BOOL)fileURLs;	// 0x350a4a8d
// converted property setter: - (void)setAllowsAnimatedImageLooping:(BOOL)looping;	// 0x350a4875
// converted property setter: - (void)setAllowsAnimatedImages:(BOOL)images;	// 0x350a4839
// converted property setter: - (void)setApplicationCacheDefaultOriginQuota:(long long)quota;	// 0x350a4cc9
// converted property setter: - (void)setApplicationCacheTotalQuota:(long long)quota;	// 0x350a4c79
// converted property setter: - (void)setApplicationChromeModeEnabled:(BOOL)enabled;	// 0x350a4999
// converted property setter: - (void)setAsynchronousSpellCheckingEnabled:(BOOL)enabled;	// 0x350a5469
// converted property setter: - (void)setAudioSessionCategoryOverride:(unsigned)override;	// 0x350a5539
// converted property setter: - (void)setAuthorAndUserStylesEnabled:(BOOL)enabled;	// 0x350a497d
// converted property setter: - (void)setAutomaticallyDetectsCacheModel:(BOOL)model;	// 0x35039dbd
// converted property setter: - (void)setAutosaves:(BOOL)autosaves;	// 0x35039a51
// converted property setter: - (void)setBackspaceKeyNavigationEnabled:(BOOL)enabled;	// 0x350a564d
- (void)setCSSCustomFilterEnabled:(BOOL)enabled;	// 0x350a51c1
- (void)setCSSRegionsEnabled:(BOOL)enabled;	// 0x350a51dd
// converted property setter: - (void)setCacheModel:(unsigned)model;	// 0x35039a65
// converted property setter: - (void)setCanvasUsesAcceleratedDrawing:(BOOL)drawing;	// 0x350a5169
// converted property setter: - (void)setCursiveFontFamily:(id)family;	// 0x350a46f1
// converted property setter: - (void)setDNSPrefetchingEnabled:(BOOL)enabled;	// 0x350a4945
// converted property setter: - (void)setDOMPasteAllowed:(BOOL)allowed;	// 0x350a50d9
// converted property setter: - (void)setDatabasesEnabled:(BOOL)enabled;	// 0x350a4d45
// converted property setter: - (void)setDefaultFixedFontSize:(int)size;	// 0x350a4745
// converted property setter: - (void)setDefaultFontSize:(int)size;	// 0x350a4729
// converted property setter: - (void)setDefaultTextEncodingName:(id)name;	// 0x350a4799
// converted property setter: - (void)setDeveloperExtrasEnabled:(BOOL)enabled;	// 0x350a4961
// converted property setter: - (void)setDiskImageCacheEnabled:(BOOL)enabled;	// 0x350a52a5
// converted property setter: - (void)setDiskImageCacheMaximumCacheSize:(unsigned)size;	// 0x350a52dd
// converted property setter: - (void)setDiskImageCacheMinimumImageSize:(unsigned)size;	// 0x350a52c1
// converted property setter: - (void)setEditableLinkBehavior:(int)behavior;	// 0x350a4cf1
// converted property setter: - (void)setEditingBehavior:(int)behavior;	// 0x350a5385
// converted property setter: - (void)setExperimentalNotificationsEnabled:(BOOL)enabled;	// 0x350a4d9d
// converted property setter: - (void)setFantasyFontFamily:(id)family;	// 0x350a470d
// converted property setter: - (void)setFixedFontFamily:(id)family;	// 0x350a469d
// converted property setter: - (void)setFrameFlatteningEnabled:(BOOL)enabled;	// 0x350a52f9
// converted property setter: - (void)setFullScreenEnabled:(BOOL)enabled;	// 0x350a542d
// converted property setter: - (void)setHixie76WebSocketProtocolEnabled:(BOOL)enabled;	// 0x350a54e5
// converted property setter: - (void)setHyperlinkAuditingEnabled:(BOOL)enabled;	// 0x350a5369
// converted property setter: - (void)setIncrementalRenderingSuppressionTimeoutInSeconds:(double)seconds;	// 0x350a57c9
// converted property setter: - (void)setJavaEnabled:(BOOL)enabled;	// 0x350a47c5
// converted property setter: - (void)setJavaScriptCanAccessClipboard:(BOOL)clipboard;	// 0x350a4a09
// converted property setter: - (void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)automatically;	// 0x350a47fd
// converted property setter: - (void)setJavaScriptEnabled:(BOOL)enabled;	// 0x350a47e1
// converted property setter: - (void)setLoadsImagesAutomatically:(BOOL)automatically;	// 0x350a4891
// converted property setter: - (void)setLoadsSiteIconsIgnoringImageLoadingPreference:(BOOL)preference;	// 0x350a548d
// converted property setter: - (void)setLocalFileContentSniffingEnabled:(BOOL)enabled;	// 0x350a49d1
// converted property setter: - (void)setLocalStorageEnabled:(BOOL)enabled;	// 0x350a4d61
// converted property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x350a5501
// converted property setter: - (void)setMediaPlaybackAllowsInline:(BOOL)anInline;	// 0x350463ed
// converted property setter: - (void)setMediaPlaybackRequiresUserGesture:(BOOL)gesture;	// 0x350a5555
// converted property setter: - (void)setMemoryInfoEnabled:(BOOL)enabled;	// 0x350a534d
// converted property setter: - (void)setMinimumFontSize:(int)size;	// 0x350a4761
// converted property setter: - (void)setMinimumLogicalFontSize:(int)size;	// 0x350a477d
// converted property setter: - (void)setMockScrollbarsEnabled:(BOOL)enabled;	// 0x350a5571
// converted property setter: - (void)setNotificationsEnabled:(BOOL)enabled;	// 0x350a5739
// converted property setter: - (void)setOfflineWebApplicationCacheEnabled:(BOOL)enabled;	// 0x35039dd1
// converted property setter: - (void)setPageCacheSupportsPlugins:(BOOL)plugins;	// 0x350a55a9
// converted property setter: - (void)setPaginateDuringLayoutEnabled:(BOOL)enabled;	// 0x350a5331
// converted property setter: - (void)setPictographFontFamily:(id)family;	// 0x350a558d
- (void)setPlugInsEnabled:(BOOL)enabled;	// 0x3503a1c9
// converted property setter: - (void)setPrivateBrowsingEnabled:(BOOL)enabled;	// 0x350463d1
// converted property setter: - (void)setRegionBasedColumnsEnabled:(BOOL)enabled;	// 0x350a5775
// converted property setter: - (void)setRequestAnimationFrameEnabled:(BOOL)enabled;	// 0x350a57ad
// converted property setter: - (void)setSansSerifFontFamily:(id)family;	// 0x350a46d5
// converted property setter: - (void)setSerifFontFamily:(id)family;	// 0x350a46b9
// converted property setter: - (void)setShouldDisplayCaptions:(BOOL)displayCaptions;	// 0x350a56c1
// converted property setter: - (void)setShouldDisplaySubtitles:(BOOL)displaySubtitles;	// 0x350a5685
// converted property setter: - (void)setShouldDisplayTextDescriptions:(BOOL)displayTextDescriptions;	// 0x350a56fd
// converted property setter: - (void)setShouldRespectImageOrientation:(BOOL)respectImageOrientation;	// 0x350a5791
// converted property setter: - (void)setShowDebugBorders:(BOOL)borders;	// 0x350a51f9
// converted property setter: - (void)setShowRepaintCounter:(BOOL)counter;	// 0x350a5215
// converted property setter: - (void)setShrinksStandaloneImagesToFit:(BOOL)fit;	// 0x35042add
// converted property setter: - (void)setSpatialNavigationEnabled:(BOOL)enabled;	// 0x350a5315
// converted property setter: - (void)setStandardFontFamily:(id)family;	// 0x350a4681
// converted property setter: - (void)setStorageTrackerEnabled:(BOOL)enabled;	// 0x3503a191
// converted property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x350a4929
// converted property setter: - (void)setTextDirectionSubmenuInclusionBehavior:(int)behavior;	// 0x350a4d0d
// converted property setter: - (void)setUsePreHTML5ParserQuirks:(BOOL)quirks;	// 0x350a53a1
// converted property setter: - (void)setUserStyleSheetEnabled:(BOOL)enabled;	// 0x350a47b9
// converted property setter: - (void)setUserStyleSheetLocation:(id)location;	// 0x350a47c1
// converted property setter: - (void)setUsesEncodingDetector:(BOOL)detector;	// 0x350a4a55
// converted property setter: - (void)setUsesPageCache:(BOOL)cache;	// 0x350a48c1
// converted property setter: - (void)setWantsBalancedSetDefersLoadingBehavior:(BOOL)behavior;	// 0x350a5669
// converted property setter: - (void)setWebArchiveDebugModeEnabled:(BOOL)enabled;	// 0x350a49b5
// converted property setter: - (void)setWebAudioEnabled:(BOOL)enabled;	// 0x350a5231
// converted property setter: - (void)setWebGLEnabled:(BOOL)enabled;	// 0x350a526d
// converted property setter: - (void)setWebSecurityEnabled:(BOOL)enabled;	// 0x350a4a71
// converted property setter: - (void)setXSSAuditorEnabled:(BOOL)enabled;	// 0x350a4a25
// converted property setter: - (void)setZoomsTextOnly:(BOOL)only;	// 0x350a49ed
// converted property getter: - (BOOL)shouldDisplayCaptions;	// 0x350a56dd
// converted property getter: - (BOOL)shouldDisplaySubtitles;	// 0x350a56a1
// converted property getter: - (BOOL)shouldDisplayTextDescriptions;	// 0x350a5719
// converted property getter: - (BOOL)shouldRespectImageOrientation;	// 0x35041d89
// converted property getter: - (BOOL)showDebugBorders;	// 0x35041a21
// converted property getter: - (BOOL)showRepaintCounter;	// 0x35041a41
// converted property getter: - (BOOL)shrinksStandaloneImagesToFit;	// 0x350414fd
// converted property getter: - (id)standardFontFamily;	// 0x350414a1
// converted property getter: - (BOOL)storageTrackerEnabled;	// 0x3503c725
// converted property getter: - (BOOL)suppressesIncrementalRendering;	// 0x35041ce9
// converted property getter: - (int)textDirectionSubmenuInclusionBehavior;	// 0x35041571
// converted property getter: - (BOOL)usePreHTML5ParserQuirks;	// 0x35041c05
// converted property getter: - (BOOL)userStyleSheetEnabled;	// 0x350a47b5
// converted property getter: - (id)userStyleSheetLocation;	// 0x350a47bd
// converted property getter: - (BOOL)usesEncodingDetector;	// 0x35041249
// converted property getter: - (BOOL)usesPageCache;	// 0x35041619
// converted property getter: - (BOOL)wantsBalancedSetDefersLoadingBehavior;	// 0x35041d49
// converted property getter: - (BOOL)webArchiveDebugModeEnabled;	// 0x35041901
// converted property getter: - (BOOL)webAudioEnabled;	// 0x35041a61
// converted property getter: - (BOOL)webGLEnabled;	// 0x350a524d
- (void)willAddToWebView;	// 0x3503c205
// converted property getter: - (BOOL)zoomsTextOnly;	// 0x35041e79
@end
