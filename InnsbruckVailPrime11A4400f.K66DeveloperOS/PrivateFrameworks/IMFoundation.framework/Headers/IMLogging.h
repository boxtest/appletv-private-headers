/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import </libobjc.A.h>


@interface IMLogging : NSObject {
}
+ (id)dateFormatter;	// 0x3122c5d9
+ (void)enableConsoleLoggingForLevel:(int)level;	// 0x3122ce01
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format;	// 0x3122c22d
+ (void)logAtLevel:(int)level type:(id)type category:(id)category format:(id)format arguments:(void *)arguments;	// 0x3122c2a1
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format;	// 0x3122c269
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info format:(id)format arguments:(void *)arguments;	// 0x3122c4f1
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info simpleLogString:(id)string;	// 0x3122c529
+ (void)logAtLevel:(int)level type:(id)type category:(id)category insertProcessInfo:(BOOL)info simpleLogString:(id)string format:(id)format arguments:(void *)arguments;	// 0x3122c2d9
+ (id)logFileDirectory;	// 0x3122c561
+ (void)logString:(id)string toFolder:(id)folder toFileNamed:(id)fileNamed;	// 0x3122c829
+ (BOOL)loggingEnabledForLevel:(int)level;	// 0x3122c169
+ (id)stringForDate;	// 0x3122c16d
+ (id)timeFormatter;	// 0x3122c701
@end

