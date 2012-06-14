/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDateFormatter, NSNumberFormatter, NSMutableDictionary;
@protocol ATVReadWriteFeedResource;

__attribute__((visibility("hidden")))
@interface ATVFeedEvaluator : NSObject {
@private
	NSDateFormatter *_zuluDateFormatter;	// 4 = 0x4
	NSNumberFormatter *_numberFormatter;	// 8 = 0x8
	NSMutableDictionary *_dateFormatterCache;	// 12 = 0xc
	id<ATVReadWriteFeedResource> _feedResource;	// 16 = 0x10
}
@property(retain) id<ATVReadWriteFeedResource> feedResource;	// G=0x30205d81; S=0x30205d95; @synthesize=_feedResource
+ (id)evaluatePlist:(id)plist withFeedResource:(id)feedResource;	// 0x30205c35
- (id)init;	// 0x30205c9d
- (id)_evaluateArguments:(id)arguments commandForErrorLogging:(id)errorLogging;	// 0x302069cd
- (id)_evaluateFunctionString:(id)string;	// 0x302064dd
- (id)_evaluateObject:(id)object withRecursionLevel:(int)recursionLevel;	// 0x30205db9
- (id)_evaluateStoreCoverArts:(id)arts;	// 0x302066ed
- (id)_ifElse:(id)anElse;	// 0x30206da1
- (id)_localtime:(id)localtime;	// 0x30206f1d
- (id)_lookup:(id)lookup;	// 0x30206ea5
- (id)_removePreferences:(id)preferences;	// 0x30207355
- (id)_setPreference:(id)preference;	// 0x30207229
- (void)dealloc;	// 0x30205cf9
// declared property getter: - (id)feedResource;	// 0x30205d81
// declared property setter: - (void)setFeedResource:(id)resource;	// 0x30205d95
@end
