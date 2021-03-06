/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

#import </libobjc.A.h>


@interface PLProcessSampler : NSObject {
}
+ (void)logSampleForPid:(int)pid forDuration:(unsigned)duration forInterval:(unsigned)interval withLogger:(id)logger;	// 0x3244cf85
+ (void)sampleProcesses:(id)processes forLogger:(id)logger;	// 0x3244ccd1
+ (id)stringSampleForPid:(int)pid forDuration:(unsigned)duration forInterval:(unsigned)interval;	// 0x3244cea9
+ (void)takeStackshot:(id)stackshot;	// 0x3244d179
@end

