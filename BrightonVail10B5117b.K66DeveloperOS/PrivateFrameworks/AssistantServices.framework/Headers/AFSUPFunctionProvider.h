/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import "AssistantServices-Structs.h"
#import "AFSpeakableUtteranceParser.h"
#import "AFSpeakableNamespaceProvider.h"

@class NSDateFormatter;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
	NSDateFormatter *_ourFormatter;	// 12 = 0xc
	BOOL _useSpeechMode;	// 16 = 0x10
}
+ (BOOL)_shouldAutomaticallyProvideFunctions;	// 0x336a5209
- (id)init;	// 0x336a520d
- (void).cxx_destruct;	// 0x336a5dd5
- (id)_callFunction:(id)function withArguments:(id)arguments;	// 0x336a5879
- (id)_currentLongDate:(id)date;	// 0x336a5511
- (id)_currentShortDate:(id)date;	// 0x336a558d
- (id)_currentTime:(id)time;	// 0x336a5495
- (id)_currentWeekday:(id)weekday;	// 0x336a5609
- (id)_dateFormattedWithFormatter:(id)formatter arguments:(id)arguments;	// 0x336a5349
- (id)_deviceModel;	// 0x336a585d
- (id)_lowercaseString:(id)string;	// 0x336a5791
- (id)_tempInWeatherUnits:(id)weatherUnits;	// 0x336a5681
- (id)stringForExpression:(id)expression;	// 0x336a5a91
- (void)useSpeechMode:(BOOL)mode;	// 0x336a5285
@end

