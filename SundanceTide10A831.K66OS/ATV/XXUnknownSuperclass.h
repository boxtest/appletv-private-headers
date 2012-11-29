/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVJSCopyObject.h"
#import "ATVJSConfigurable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, ATVBindingAdaptor, NSString;

@interface XXUnknownSuperclass (iTunesAdditions)
+ (id)stringWithUStr255:(unsigned short [256])ustr255;	// 0xbd85
- (int)iTunesCompare:(id)compare;	// 0xbda5
@end

@interface XXUnknownSuperclass (ATVValueTransformerAdditions)
+ (id)dateToMonthDayYearString;	// 0x12fc91
+ (id)releaseDateAsInTheatersDateString;	// 0x12fa59
+ (id)releaseDateAsOriginalAirDateString;	// 0x12fa9d
+ (id)releaseDateAsReleasedDateString;	// 0x12f9c9
+ (id)releaseDateAsYearReleasedString;	// 0x12f939
+ (id)tomatoMeter;	// 0x12fdf5
+ (id)tvEpisodeTitleToNumberedTitle;	// 0x12fd65
+ (id)userRatingAndNumReviewsToControl;	// 0x12fc01
+ (id)userRatingToImageControl;	// 0x12fae1
+ (id)userReviewsNumberToTextControl;	// 0x12fb71
+ (id)versionStringToVersionComponentsArray;	// 0x12fd21
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16d27d
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16d349
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16d3a5
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16d401
@end

@interface XXUnknownSuperclass (JSAdditions)
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x16d461
@end

@interface XXUnknownSuperclass (JSAdditions) <ATVJSCopyObject, ATVJSConfigurable>
+ (void)setupForJavaScript:(OpaqueJSContext *)javaScript object:(OpaqueJSValue *)object;	// 0x174829
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x174a95
@end

@interface XXUnknownSuperclass (FeedAdditions)
- (id)_lookupFeedValueForKey:(id)key expectedClass:(Class)aClass;	// 0x192ea9
- (id)arrayForFeedKey:(id)feedKey;	// 0x193139
- (BOOL)boolForFeedKey:(id)feedKey defaultValue:(BOOL)value;	// 0x193031
- (id)dataForFeedKey:(id)feedKey;	// 0x19319d
- (id)dateForFeedKey:(id)feedKey;	// 0x193071
- (id)dictionaryForFeedKey:(id)feedKey;	// 0x1930d5
- (id)numberForFeedKey:(id)feedKey;	// 0x192f69
- (id)stringForFeedKey:(id)feedKey;	// 0x192fcd
@end

@interface XXUnknownSuperclass (ATVAudio)
@property(readonly, assign, nonatomic) BOOL atvIsAC3;	// G=0x214611; 
// declared property getter: - (BOOL)atvIsAC3;	// 0x214611
@end

@interface XXUnknownSuperclass (AVMediaSelectionGroup_ATVAdditions)
- (id)_firstOptionMatchingLocale:(id)locale;	// 0x218a05
@end

@interface XXUnknownSuperclass (AVAssetTrack_ATVAdditions)
- (id)_locale;	// 0x218a79
@end

@interface XXUnknownSuperclass (ATVSubtitles)
@property(readonly, assign, nonatomic) BOOL atvIsSDH;	// G=0x21f9d5; 
// declared property getter: - (BOOL)atvIsSDH;	// 0x21f9d5
@end

@interface XXUnknownSuperclass (ATVBindingAdaptorAccess)
@property(readonly, assign) ATVBindingAdaptor *bindingAdaptor;	// G=0x25d0d9; 
- (id)_bindingAdaptor;	// 0x25d0c9
// declared property getter: - (id)bindingAdaptor;	// 0x25d0d9
- (void)releaseBindingAdaptor;	// 0x25d151
@end

@interface XXUnknownSuperclass (ATVBindingUtilities)
- (void)bind:(id)bind toObject:(id)object withKeyPath:(id)keyPath options:(id)options;	// 0x25d2c9
- (id)infoForBinding:(id)binding;	// 0x25d45d
- (void)unbind:(id)unbind;	// 0x25d3d1
- (void)updateBoundValueForBinding:(id)binding;	// 0x25d199
@end

@interface XXUnknownSuperclass (ATVAutounbinderAccess)
- (id)_autounbinder;	// 0x25d4e9
- (void)_setAutounbinder:(id)autounbinder;	// 0x25d4f9
@end

@interface XXUnknownSuperclass (RUIYTAdditions)
+ (id)ytErrorWithCode:(int)code localizedDescription:(id)description;	// 0x264431
@end

@interface XXUnknownSuperclass (DirtyLayout)
- (void)setNeedsLayoutOnAllSublayers;	// 0x27b13d
@end

@interface XXUnknownSuperclass (Accessibility)
@property(readonly, assign, nonatomic) NSArray *accessibilityControls;	// G=0x2826dd; 
@property(assign, nonatomic) BOOL accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// G=0x28270d; S=0x282739; @dynamic
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRange;	// G=0x282705; 
@property(readonly, assign, nonatomic) BOOL accessibilityOutputsRangeForChildren;	// G=0x282701; 
@property(readonly, assign, nonatomic) NSString *accessibilityRangeString;	// G=0x282709; 
// declared property getter: - (id)accessibilityControls;	// 0x2826dd
- (float)accessibilityDelayForScreenContent;	// 0x2826cd
- (BOOL)accessibilityElementIsHidden;	// 0x2826d5
- (id)accessibilityNonFocusableElements;	// 0x2826c9
// declared property getter: - (BOOL)accessibilityOutputsLanguageNameIfCannotSpeakLanguage;	// 0x28270d
// declared property getter: - (BOOL)accessibilityOutputsRange;	// 0x282705
// declared property getter: - (BOOL)accessibilityOutputsRangeForChildren;	// 0x282701
// declared property getter: - (id)accessibilityRangeString;	// 0x282709
- (id)accessibilityScreenContent;	// 0x2826fd
- (id)accessibilitySecondaryLabel;	// 0x2826f9
- (id)accessibilityTraitsList;	// 0x2826d9
// declared property setter: - (void)setAccessibilityOutputsLanguageNameIfCannotSpeakLanguage:(BOOL)language;	// 0x282739
@end

@interface XXUnknownSuperclass (AXPriv)
- (id)accessibilityLabel;	// 0x282775
@end

@interface XXUnknownSuperclass (NSIndexPathExtensions)
+ (id)indexPathForColumn:(unsigned)column inSection:(unsigned)section;	// 0x2b17e1
- (unsigned)column;	// 0x2b182d
@end

@interface XXUnknownSuperclass (PhotoBatchIndexPath)
+ (id)indexPathForPhoto:(unsigned)photo inBatch:(unsigned)batch;	// 0x2b1841
- (unsigned)batch;	// 0x2b188d
- (unsigned)photo;	// 0x2b18c5
@end

@interface XXUnknownSuperclass (GridIndexPath)
+ (id)indexPathForIndex:(unsigned)index;	// 0x2b18fd
- (unsigned)index;	// 0x2b1919
@end

@interface XXUnknownSuperclass (BRMetadataLinesLayer)
- (BOOL)isEmpty;	// 0x2e9f8d
@end

@interface XXUnknownSuperclass (BRScalingLayoutManager)
@property(assign) CGRect scaledFrame;	// G=0x34c239; S=0x34c185; converted property
// converted property getter: - (CGRect)scaledFrame;	// 0x34c239
// converted property setter: - (void)setScaledFrame:(CGRect)frame;	// 0x34c185
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (void)postProviderItemsModifiedNotificationForRange:(NSRange)range object:(id)object;	// 0x35275d
- (void)postProviderItemsModifiedNotificationForRanges:(id)ranges object:(id)object;	// 0x3527b9
- (void)postProviderTitleChangedNotificationFrom:(id)from;	// 0x352815
@end

@interface XXUnknownSuperclass (BRProviderHelpers)
- (id)providerRanges;	// 0x352835
@end

@interface XXUnknownSuperclass (IsMediaAsset)
- (BOOL)isMediaAsset;	// 0x35d20d
@end

@interface XXUnknownSuperclass (FeatureManagerAdditions)
- (BOOL)isApplianceBundleIdentifier;	// 0x3644ed
@end

@interface XXUnknownSuperclass (BRBundleAdditions)
- (id)pathForImage:(id)image ofType:(id)type;	// 0x385979
- (id)pathForImage:(id)image ofType:(id)type inDirectory:(id)directory;	// 0x38599d
- (id)urlForImage:(id)image ofType:(id)type;	// 0x385ad9
@end

@interface XXUnknownSuperclass (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x385f69
@end

@interface XXUnknownSuperclass (FirstRest)
- (id)first;	// 0x386131
- (id)firstObject;	// 0x3860f9
- (id)head;	// 0x386195
- (id)rest;	// 0x386141
- (id)tail;	// 0x3861a5
@end

@interface XXUnknownSuperclass (Map)
- (id)map:(id)map;	// 0x3861b5
@end

@interface XXUnknownSuperclass (Filter)
- (id)objectsPassingTest:(id)test;	// 0x3862ed
@end

@interface XXUnknownSuperclass (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x38631d
@end

@interface XXUnknownSuperclass (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x38639d
@end

@interface XXUnknownSuperclass (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x386435
+ (id)shuffleArray:(id)array;	// 0x3863fd
@end

@interface XXUnknownSuperclass (BRMutableArrayAdditions)
- (void)addObjectIfNotNil:(id)aNil;	// 0x386599
- (void)shuffle;	// 0x3865b1
@end

@interface XXUnknownSuperclass (BRCALayerAdditions)
- (void)addBasicAnimationForProperty:(id)property fromValue:(id)value toValue:(id)value3 duration:(double)duration timingFunction:(id)function delegate:(id)delegate;	// 0x38a2ed
- (id)firstLayerNamed:(id)named;	// 0x38a26d
@end

@interface XXUnknownSuperclass (BRDataUtilities)
- (id)AES256DecryptWithKey:(id)key;	// 0x38ac8d
- (id)AES256EncryptWithKey:(id)key;	// 0x38aba1
@end

@interface XXUnknownSuperclass (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x38ad79
- (id)dateCeiledToNearestMinutes:(int)nearestMinutes;	// 0x38b119
- (id)dateFlooredToNearestMinutes:(int)nearestMinutes;	// 0x38b019
- (BOOL)isToday;	// 0x38aeb1
- (BOOL)isTomorrow;	// 0x38afa1
- (BOOL)isYesterday;	// 0x38af29
@end

@interface XXUnknownSuperclass (BRDateDisplay)
- (id)expiryDescription;	// 0x38b7d9
- (id)stringForDisplayingMonthDayYear;	// 0x38b489
- (id)stringForDisplayingTime12H;	// 0x38b535
- (id)stringForGeneralDisplay;	// 0x38b241
- (id)stringForMonthDayFormat;	// 0x38b5f5
- (id)stringForReleaseDateDisplay;	// 0x38b3e5
- (id)stringFromDateForTVShows;	// 0x38b231
@end

@interface XXUnknownSuperclass (ISO8601)
- (id)stringForISO8601CombinedDateAndTime;	// 0x38b9d9
@end

@interface XXUnknownSuperclass (SpecialFormatters)
+ (id)asctimeDateFormatter;	// 0x38bc35
+ (id)iso8601CombinedDateAndTimeFormatter;	// 0x38ba11
+ (id)rfc1123DateFormatter;	// 0x38ba95
+ (id)rfc850DateFormatter;	// 0x38bb65
@end

@interface XXUnknownSuperclass (BRDictionaryAdditions)
+ (id)dictionaryOfLocalizedRUIData;	// 0x38c96d
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary;	// 0x38c61d
+ (id)dictionaryWithContentsOfURL:(id)url withHeaderDictionary:(id)headerDictionary cachePolicy:(unsigned)policy;	// 0x38c641
- (id)URLQueryString;	// 0x38caf1
- (id)URLQueryStringWithKeyOrder:(id)keyOrder;	// 0x38cb05
- (void)__purgeCachedLocalizedData:(id)data;	// 0x38c915
- (id)deepCopy;	// 0x38cac1
- (id)deepMutableCopy;	// 0x38cad9
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x38ca61
@end

@interface XXUnknownSuperclass (BRMutableDictionaryAdditions)
- (void)setObjectIfNotNil:(id)aNil forKey:(id)key;	// 0x38cd21
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x38cd3d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x38cd4d
@end

@interface XXUnknownSuperclass (BRDisplayString)
- (id)displayString;	// 0x38cd69
@end

@interface XXUnknownSuperclass (BRError)
+ (id)errorWithBRError:(int)brerror;	// 0x38e38d
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion;	// 0x38e531
+ (id)errorWithBRError:(int)brerror withDescription:(id)description withReason:(id)reason andSuggestion:(id)suggestion userInfo:(id)info;	// 0x38e55d
- (void)postBRErrorNotificationFromObject:(id)object;	// 0x38e66d
@end

@interface XXUnknownSuperclass (BRObjectAdditions)
- (void)attachDeallocationBlock:(id)block;	// 0x39e6f5
@end

@interface XXUnknownSuperclass (ATVKeyValueCodingAdditions)
- (id)arrayValueForKey:(id)key;	// 0x39ec4d
@end

@interface XXUnknownSuperclass (BRStringUtilities)
+ (id)hexStringWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3a1f09
+ (id)timeStringForSeconds:(double)seconds;	// 0x3a1f89
+ (id)timeStringWithLabelForSeconds:(double)seconds;	// 0x3a20a9
- (int)customCompare:(id)compare;	// 0x3a2179
- (id)fileSafeString;	// 0x3a2281
- (BOOL)hasCaseInsensitivePrefix:(id)prefix;	// 0x3a2331
- (unsigned long)hexValue;	// 0x3a2209
- (id)md5String;	// 0x3a2a35
- (id)sshA1String;	// 0x3a2ab5
- (id)stringByDecodingFriendlyHTMLCodes;	// 0x3a2605
- (id)stringByRemovingCharactersInSet:(id)set;	// 0x3a23c1
- (id)stringByReplacingCharactersInSet:(id)set withString:(id)string;	// 0x3a24ad
- (id)stringByURLEncoding;	// 0x3a2b79
- (id)subStringAfter:(int)after;	// 0x3a238d
- (id)subStringBefore:(int)before;	// 0x3a2379
@end

@interface XXUnknownSuperclass (ThreadSpecificNotifications)
- (void)_postNotification:(id)notification;	// 0x3a33d5
- (void)postNotification:(id)notification onThread:(id)thread;	// 0x3a3335
- (void)postNotificationName:(id)name object:(id)object onThread:(id)thread;	// 0x3a3351
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info onThread:(id)thread;	// 0x3a338d
- (void)postNotificationOnMainThread:(id)thread;	// 0x3a3269
- (void)postNotificationOnMainThreadNamed:(id)named;	// 0x3a3299
- (void)postNotificationOnMainThreadNamed:(id)named object:(id)object;	// 0x3a32e9
@end

@interface XXUnknownSuperclass (BRTimerAdditions)
- (void)invalidateWithObject:(id)object;	// 0x3a39f5
@end

@interface XXUnknownSuperclass (Drawing)
- (void)drawAtPoint:(CGPoint)point context:(CGContextRef)context;	// 0x3a41fd
- (void)drawInRect:(CGRect)rect context:(CGContextRef)context;	// 0x3a422d
- (void)drawInRect:(CGRect)rect withDim:(float)dim context:(CGContextRef)context;	// 0x3a42a1
- (CGSize)typographicBounds;	// 0x3a4359
- (CGSize)typographicBoundsWithConstraint:(CGSize)constraint;	// 0x3a4391
@end

@interface XXUnknownSuperclass (BRValueTransformerAdditions)
+ (id)movieRatingStringTransformer;	// 0x3a5451
@end

@interface XXUnknownSuperclass (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x3a5a59
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x3a5bb1
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x3a584d
- (id)_queryParameters;	// 0x3a55d5
- (id)decodedQueryParameters;	// 0x3a56fd
- (BOOL)isHTTPFamilyURL;	// 0x3a5595
- (BOOL)isHTTPSURL;	// 0x3a5555
- (BOOL)isHTTPURL;	// 0x3a5515
- (id)queryParameters;	// 0x3a56ed
- (id)valueForParam:(id)param;	// 0x3a5ac9
@end

@interface XXUnknownSuperclass (BRValueAdditions)
+ (id)valueWithCGPoint:(CGPoint)cgpoint;	// 0x3a63b5
+ (id)valueWithCGRect:(CGRect)cgrect;	// 0x3a63e5
+ (id)valueWithCGSize:(CGSize)cgsize;	// 0x3a6421
- (CGPoint)cgPointValue;	// 0x3a6451
- (CGRect)cgRectValue;	// 0x3a6485
- (CGSize)cgSizeValue;	// 0x3a64c5
@end

@interface XXUnknownSuperclass (MimeDataEncoding)
+ (unsigned)quotedPrintableLengthOfHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x3a78fd
- (id)decodeBase64;	// 0x3a6ca1
- (id)decodeModifiedBase64;	// 0x3a78dd
- (id)decodeQuotedPrintableForText:(BOOL)text;	// 0x3a661d
- (id)encodeBase64;	// 0x3a78c5
- (id)encodeBase64AllowCancel:(BOOL)cancel;	// 0x3a78d1
- (id)encodeBase64HeaderData;	// 0x3a78f1
- (id)encodeBase64WithoutLineBreaks;	// 0x3a72a1
- (id)encodeBase64WithoutLineBreaksOrPadding;	// 0x3a78b9
- (id)encodeModifiedBase64;	// 0x3a78e5
- (id)encodeQuotedPrintableForText:(BOOL)text;	// 0x3a6965
- (id)encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;	// 0x3a6979
- (BOOL)isValidBase64Data;	// 0x3a71f1
@end

@interface XXUnknownSuperclass (MimeDataEncoding)
- (void)appendQuotedPrintableDataForHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x3a7a29
@end

@interface XXUnknownSuperclass (SimpleQueue)
- (id)pop;	// 0x3b14c9
@end

@interface XXUnknownSuperclass (ATV)
+ (id)operationWithRequestProperties:(id)requestProperties;	// 0x3b670d
@end

@interface XXUnknownSuperclass (NSObject_SBJsonWriting)
- (id)JSONRepresentation;	// 0x499e75
@end

@interface XXUnknownSuperclass (NSString_SBJsonParsing)
- (id)JSONValue;	// 0x499ef9
@end

@interface XXUnknownSuperclass (URLDecode)
- (id)urlDecodeByReplacingPercentEscapesUsingEncoding;	// 0x4bdaf9
@end

@interface XXUnknownSuperclass (URLEncode)
- (id)urlEncodeByReplacingPercentEscapesUsingEncoding;	// 0x4d9a21
@end

@interface XXUnknownSuperclass (AOSStringAdditions)
- (id)stringByURLQuoting;	// 0x83208d
- (id)stringByURLQuotingWithCharactersToEscape:(id)escape;	// 0x832049
@end

@interface XXUnknownSuperclass (AOSURLAdditions)
@end
