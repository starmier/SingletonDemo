//
//  ViewController.m
//  SMSingletonDemo
//
//  Created by starmier on 2019/2/18.
//  Copyright © 2019年 starmier. All rights reserved.
//

#import "ViewController.h"
#include "ISMSingleton.h"
#include "SMSingleton.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
	[super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
	createSMSingleten();
	SMSingleton::instance()->testlog();
}


@end
