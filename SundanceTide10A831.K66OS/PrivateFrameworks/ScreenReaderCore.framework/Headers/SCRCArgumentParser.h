/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "SCRCArgumentSubcommand.h"

@class NSString, NSMutableArray;

@interface SCRCArgumentParser : SCRCArgumentSubcommand {
	int _argc;	// 12 = 0xc
	char **_argv;	// 16 = 0x10
	NSMutableArray *_subcommandArray;	// 20 = 0x14
	NSMutableArray *_argumentArray;	// 24 = 0x18
	NSString *_appName;	// 28 = 0x1c
	SCRCArgumentSubcommand *_subcommand;	// 32 = 0x20
	BOOL _isLaunchedAtLogin;	// 36 = 0x24
}
@property(retain) NSString *appName;	// G=0x34ec53a5; S=0x34ec5369; converted property
@property(readonly, assign) int argc;	// G=0x34ec5349; converted property
@property(readonly, assign) char **argv;	// G=0x34ec5339; converted property
@property(readonly, assign) BOOL isLaunchedAtLogin;	// G=0x34ec5359; converted property
+ (id)commandPath;	// 0x34ec500d
+ (id)processIdentifier;	// 0x34ec5005
+ (id)versionString;	// 0x34ec5009
- (id)initWithArgc:(int)argc argv:(const char **)argv;	// 0x34ec5061
- (id)_displayHelp:(id)help;	// 0x34ec5db1
- (id)_displayVersion:(id)version;	// 0x34ec5d0d
- (void)addSubcommand:(id)subcommand;	// 0x34ec53b5
// converted property getter: - (id)appName;	// 0x34ec53a5
// converted property getter: - (int)argc;	// 0x34ec5349
// converted property getter: - (char **)argv;	// 0x34ec5339
- (void)dealloc;	// 0x34ec2639
// converted property getter: - (BOOL)isLaunchedAtLogin;	// 0x34ec5359
- (BOOL)parse;	// 0x34ec53fd
- (int)run;	// 0x34ec5ced
// converted property setter: - (void)setAppName:(id)name;	// 0x34ec5369
- (id)setRunningAtStartup:(id)startup;	// 0x34ec6255
- (void)stop;	// 0x34ec2619
@end

