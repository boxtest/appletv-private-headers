/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSTask : NSObject {
}
@property(retain) id arguments;	// G=0x355b4399; S=0x355b41e9; converted property
@property(retain) id currentDirectoryPath;	// G=0x355b43bd; S=0x355b420d; converted property
@property(retain) id environment;	// G=0x355b4375; S=0x355b4231; converted property
@property(retain) id launchPath;	// G=0x355b4351; S=0x355b4255; converted property
@property(retain) id standardError;	// G=0x355b4495; S=0x355b4429; converted property
@property(retain) id standardInput;	// G=0x355b444d; S=0x355b43e1; converted property
@property(retain) id standardOutput;	// G=0x355b4471; S=0x355b4405; converted property
@property(copy) id terminationHandler;	// G=0x355b4111; S=0x355b4135; 
+ (id)allocWithZone:(NSZone *)zone;	// 0x355b44e5
+ (id)currentTaskDictionary;	// 0x355b4531
+ (id)launchedTaskWithDictionary:(id)dictionary;	// 0x355b4625
+ (id)launchedTaskWithLaunchPath:(id)launchPath arguments:(id)arguments;	// 0x355b4679
- (id)init;	// 0x355b44b9
// converted property getter: - (id)arguments;	// 0x355b4399
// converted property getter: - (id)currentDirectoryPath;	// 0x355b43bd
// converted property getter: - (id)environment;	// 0x355b4375
- (void)interrupt;	// 0x355b4279
- (BOOL)isRunning;	// 0x355b41a1
- (void)launch;	// 0x355b41c5
// converted property getter: - (id)launchPath;	// 0x355b4351
- (int)processIdentifier;	// 0x355b432d
- (BOOL)resume;	// 0x355b42e5
// converted property setter: - (void)setArguments:(id)arguments;	// 0x355b41e9
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x355b420d
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x355b4231
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x355b4255
// converted property setter: - (void)setStandardError:(id)error;	// 0x355b4429
// converted property setter: - (void)setStandardInput:(id)input;	// 0x355b43e1
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x355b4405
// declared property setter: - (void)setTerminationHandler:(id)handler;	// 0x355b4135
// converted property getter: - (id)standardError;	// 0x355b4495
// converted property getter: - (id)standardInput;	// 0x355b444d
// converted property getter: - (id)standardOutput;	// 0x355b4471
- (BOOL)suspend;	// 0x355b42c1
- (int)suspendCount;	// 0x355b4309
- (void)terminate;	// 0x355b429d
// declared property getter: - (id)terminationHandler;	// 0x355b4111
- (int)terminationReason;	// 0x355b417d
- (int)terminationStatus;	// 0x355b4159
@end
