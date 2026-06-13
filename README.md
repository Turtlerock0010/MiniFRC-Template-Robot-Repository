# MiniFRC Template Robot Repository
<img width="256" height="256" alt="MiniFRC Template Robot Repository Logo (2)" src="https://github.com/user-attachments/assets/951dfe7c-92c3-4923-ba1e-bb8c7e813269" />



> Put in your team logo or remove it if you like!


## Table of Contents
* [Features](#features)
  * [Code Releases](#code-releases)
  * [Code Verification](#code-verification)
  * [Supported Libraries](#supported-libraries)
  * [Separate Files](#separate-files)
  * [License](#license)
* [Tutorials](#tutorials) <--- Make sure to read this!!!
  * [🚀 The Basics](https://github.com/Turtlerock0010/MiniFRC-Template-Robot-Repository/tree/main/README.md#-the-basics)
  * [🤝 Collaboration](https://github.com/Turtlerock0010/MiniFRC-Template-Robot-Repository/tree/main/README.md#-collaboration)
  * [🏔️ Extras & Advanced Concepts](https://github.com/Turtlerock0010/MiniFRC-Template-Robot-Repository/tree/main/README.md#%EF%B8%8F-extras--advanced-concepts)

## Features
With this repository, there is a couple of quality-of-life additions here to make collaboration, code copying, and structuring easier! Feel free to remove anything that you don't necessarily like or just have no use for it!

### Code Releases
By creating a release, the repository would automatically start a Github Action to zip all your files up in the `src` folder into one .zip file! This can be used for transfering information from one teammate to the next or setting stable/final version code!

<img width="1248" height="516" alt="image" src="https://github.com/user-attachments/assets/1b568a09-f65b-4805-a631-eff41462b3c3" />

> An example code release

> [!TIP]
> Need help understanding what a release is and how to do it? Take a look at [this tutorial](https://docs.github.com/en/repositories/releasing-projects-on-github/managing-releases-in-a-repository)!

### Code Verification
If you ever change anything in the `src` file -- merges, pushes, commits, etc -- the github repo will automatically verify the code within that folder to ensure it works properly! This is especially useful for parity between your on computer files and those on the repository!

<img width="1410" height="683" alt="image" src="https://github.com/user-attachments/assets/abd9eb8a-2d82-4db1-9629-c76ad31c4e82" />

> an example code push/commit

> [!IMPORTANT]
> Verification times will take quite long for the first commit! For future commits it will get faster!

#### Supported Libraries
For code verification, there are a couple of non-arduino libraries that have been added for your ease of use! This includes:
- [Alfredo-NoU3](https://github.com/AlfredoSystems/Alfredo-NoU3) || By Alfredo Systems
- [PestoLink-Recieve](https://github.com/AlfredoSystems/PestoLink-Receive) || By Alfredo Systems
- [HCSRO4_attachInterrupt](https://github.com/joshua-8/HCSRO4_attachInterrupt) || By Joshua Phelps

> [!NOTE]
> Need help with custom and .ZIP libraries? Find me on the MiniFRC Discord or check out how I did it [here](https://github.com/Turtlerock0010/ADD-VI/blob/main/.github/workflows/verify.yml)!


### Separate Files
For code that isn't necessarily running on the robot but needs to be kept in the repository for reference or external usage, consider putting it into the `extras`  or `autos` folder! These are detached from the code verifications script so no errors will be thrown if you ever have any there!

### License
This template repository is licensed under the MIT License to clearly define how anyone can copy and use this repository! Although, the license would copy over to your new repository, so feel free to change it! Just remember to change the copyright notice!

<img width="295" height="151" alt="image" src="https://github.com/user-attachments/assets/b7a5bacf-24a3-420e-ae9f-23bca1bdff04" />

> The copyright notice to change


## Tutorials

### 🚀 The Basics
- [How to create from a template repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/creating-a-repository-from-a-template)
- [How to make a commit](https://docs.github.com/en/pull-requests/committing-changes-to-your-project/creating-and-editing-commits)
- [How to view workflows](https://docs.github.com/en/actions/how-tos/monitor-workflows/view-workflow-run-history)
- [How to create a release](https://docs.github.com/en/repositories/releasing-projects-on-github/managing-releases-in-a-repository)

### 🤝 Collaboration
- [How to make an issue](https://docs.github.com/en/issues/tracking-your-work-with-issues/using-issues/creating-an-issue)
- [How to invite contributors](https://docs.github.com/en/repositories/managing-your-repositorys-settings-and-features/repository-access-and-collaboration/inviting-collaborators-to-a-personal-repository)
- [How to handle pull requests](https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/about-pull-requests)

### 🏔️ Extras & Advanced Concepts
- [How to sync your repository to your computer](https://docs.github.com/en/desktop/overview/getting-started-with-github-desktop)
- [How to make a workflow](https://docs.github.com/en/actions/tutorials/create-an-example-workflow)


## Feel free to change anything here in your template!!!
